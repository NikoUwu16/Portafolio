#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

struct Candidato {
    string Nombre, Partido;
    int Edad;
};

void Registrar(Candidato &C, const string &Archivos_candidatos) {
    ofstream archivo(Archivos_candidatos, ios::app);
    
    if (archivo.is_open()) {
    	
    	cout << "Registrar candidato." << endl;
    	cout << endl;
        cout << "Nombre del candidato: ";
        cin >> C.Nombre;
        cin.ignore();
        
        cout << "Edad del candidato: ";
        cin >> C.Edad;
        
        cout << "Partido Politico al que pertenece: ";
        getline(cin, C.Partido);
        
        archivo << C.Nombre << "," << C.Edad << "," << C.Partido << endl;
        
        archivo.close();
        cout << "Datos completados..." << endl;
    } else {
        cout << "No se pudo abrir el archivo..." << endl;
    }
}

void Ver_candidatos(const string &Archivos_candidatos){
	ifstream archivo(Archivos_candidatos, ios::in);
	
	if(archivo.is_open()){
		string nombre, edad, partido, linea;
		
		cout << "todos los candidatos." << endl;
		cout << endl;
		cout << "Datos de los candidatos: " << endl;
		while(getline(archivo, linea)){
			stringstream ss(linea);
			getline(ss, nombre, ',');
			getline(ss, edad, ',');
			getline(ss, partido, ',');
			cout << endl;
			cout <<"Nombre: "<< nombre <<","<<"Edad: "<< edad <<","<<"Partido: "<< partido << endl;
		}
		archivo.close();
	}else{
		cout << "No se pudo abrir el archivo." << endl;
	}
	
}

int main() {
    int Num;
    string Archivo_candidatos = "candidatos.txt";
    char continuar;
    Candidato candidato;
    
    do {
    	cout << "PUNTO 4." << endl;
    	cout << endl;
        cout << "1: Registrar candidato." << endl;
        cout << "2: Ver todos los candidatos." << endl;
        cout << "3: Salir." << endl;
        cout << "Digitar un numero: ";
        cin >> Num;
        
        switch (Num) {
            case 1:
                do {
                    system("cls");
                    Registrar(candidato, Archivo_candidatos);
                    cout << "¿Quieres regresar al menu? (s/n): ";
                    cin >> continuar;
                    cin.ignore();
                    
                    if (continuar == 's' || continuar == 'S') {
                        break;
                    }       
                } while (continuar == 'n' || continuar == 'N');
                break;
            case 2:
            	do {
                    system("cls");
                    Ver_candidatos(Archivo_candidatos);
                    cout << "¿Quieres regresar al menu? (s/n): ";
                    cin >> continuar;
                    cin.ignore();
                    
                    if (continuar == 's' || continuar == 'S') {
                        break;
                    }       
                } while (continuar == 'n' || continuar == 'N');
                break;
            case 3:
                cout << "Saliendo del programa... ¡Hasta luego!" << endl;
                return 0;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
                break;
        }
    } while (true);
    
    return 0;
}

