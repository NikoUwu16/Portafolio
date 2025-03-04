#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

struct Candidato {
    string Nombre, Partido;
    int Edad;
    int VotosTV = 0, VotosRadio = 0, VotosInternet = 0;
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
void ActualizarVotos(const string &Archivo_candidatos) {
    ifstream archivo(Archivo_candidatos);
    ofstream archivo_temp("temp.txt");
    
    string nombre, edad, partido, linea;
    int votosTV, votosRadio, votosInternet;
    bool encontrado = false;

    if (archivo.is_open() && archivo_temp.is_open()) {
        cout << "Ingrese el nombre del candidato a actualizar: ";
        string nombre_buscar;
        cin.ignore();
        getline(cin, nombre_buscar);

        while (getline(archivo, linea)) {
            stringstream ss(linea);
            getline(ss, nombre, ',');
            getline(ss, edad, ',');
            getline(ss, partido, ',');
            ss >> votosTV >> votosRadio >> votosInternet;

            if (nombre == nombre_buscar) {
                encontrado = true;
                cout << "Candidato encontrado: " << nombre << endl;
                cout << "Votos actuales - TV: " << votosTV << ", Radio: " << votosRadio << ", Internet: " << votosInternet << endl;
                cout << "Ingrese los nuevos votos por TV: ";
                int nuevosTV;
                cin >> nuevosTV;
                votosTV += nuevosTV;

                cout << "Ingrese los nuevos votos por Radio: ";
                int nuevosRadio;
                cin >> nuevosRadio;
                votosRadio += nuevosRadio;

                cout << "Ingrese los nuevos votos por Internet: ";
                int nuevosInternet;
                cin >> nuevosInternet;
                votosInternet += nuevosInternet;
            }

            archivo_temp << nombre << "," << edad << "," << partido << "," << votosTV << "," << votosRadio << "," << votosInternet << endl;
        }

        archivo.close();
        archivo_temp.close();

        if (encontrado) {
            remove(Archivo_candidatos.c_str());
            rename("temp.txt", Archivo_candidatos.c_str());
            cout << "Votos actualizados correctamente." << endl;
        } else {
            remove("temp.txt");
            cout << "Candidato no encontrado." << endl;
        }
    } else {
        cout << "Error al abrir los archivos." << endl;
    }
}

int main() {
    int Num;
    string Archivo_candidatos = "candidatos.txt";
    char continuar;
    Candidato candidato;
    
    do {
    	system("cls");
    	cout << "PUNTO 4." << endl;
    	cout << endl;
        cout << "1: Registrar candidato." << endl;
        cout << "2: Ver todos los candidatos." << endl;
        cout << "3: Anadir votos influenciados por publicidad a un candidato." << endl;
        cout << "4: Salir." << endl;
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
				do {
        			system("cls");
        			ActualizarVotos(Archivo_candidatos);
        			cout << "¿Quieres regresar al menu? (s/n): ";
        			cin >> continuar;
        			cin.ignore();
        			if (continuar == 's' || continuar == 'S') {
           				 break;
        			}
    			} while (continuar == 'n' || continuar == 'N');
    			break;
            case 4:
                cout << "Saliendo del programa... ¡Hasta luego!" << endl;
                return 0;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
                break;
        }
    } while (true);
    
    return 0;
}

