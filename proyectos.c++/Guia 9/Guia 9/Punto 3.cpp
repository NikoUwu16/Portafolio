#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

struct Perro{
	string Nombre;
	string Raza;
	int edad;
	float peso;
};

struct Gato{
	string Nombre;
	string Raza;
	int edad;
	string peso;
};

void Registrar_un_nuevo_perro(Perro &p, const string &Nombre_archivo) {
    ofstream archivo(Nombre_archivo, ios::app);

    if (archivo.is_open()) {
    	
    	cout << "Registrar perros." << endl;
    	cout << endl;
        cout << "Nombre del perro: ";
        cin.ignore(); 
        getline(cin, p.Nombre);

        cout << "Ingresa la raza: ";
        getline(cin, p.Raza);  

        cout << "Ingresa la edad: ";
        cin >> p.edad; 

        cout << "Ingresa el peso: ";
        cin >> p.peso;  

    
        archivo << p.Nombre << "," << p.Raza << "," << p.edad << "," << p.peso << endl;

        archivo.close();
        cout << "Datos completados..." << endl;
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }
}
void Registrar_un_nuevo_gato(Gato &g, const string& Nombre_del_2archivo){
	ofstream archivo(Nombre_del_2archivo, ios::app);
	
	if(archivo.is_open()){
		cout << "Registrar gatos."<< endl;
		cout << endl;
	    cout << "Nombre del gato: ";
        cin.ignore(); 
        getline(cin, g.Nombre);

        cout << "Ingresa la raza: ";
        getline(cin, g.Raza);  

        cout << "Ingresa la edad: ";
        cin >> g.edad; 

        cout << "Ingresa el peso: ";
        cin >> g.peso;  

    
        archivo << g.Nombre << "," << g.Raza << "," << g.edad << "," << g.peso << endl;

		archivo.close();
		cout << "Datos completados... "<< endl;			
	}else {
		cout << "No se pudo abrir el archivo."<<endl;
	}
}
void Nombre_de_los_perros(const string &Nombre_archivo) {
    ifstream archivo(Nombre_archivo, ios::in);
    
    if (archivo.is_open()) {
        string linea, nombre;
        
        cout << "Nombres de los perros:"<< endl;
        cout << endl;
        cout << "Nombres registrados en el archivo: " << endl;
        while (getline(archivo, linea)) {
            stringstream ss(linea);
            getline(ss, nombre, ','); 
            cout << nombre << endl;  
        }
        archivo.close(); 
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }
}
void Nombre_de_los_gatos(const string &Nombre_del_2archivo) {
    ifstream archivo(Nombre_del_2archivo, ios::in);
    
    if (archivo.is_open()) {
        string linea, nombre;
        
        cout << "Nombre de los gatos:"<< endl;
        cout << endl;
        cout << "Nombres registrados en el archivo: " << endl;
        while (getline(archivo, linea)) {
            stringstream ss(linea);
            getline(ss, nombre, ','); 
            cout << nombre << endl;  
        }
        archivo.close(); 
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }
}void raza_de_los_perros(const string &Nombre_archivo){
	ifstream archivo(Nombre_archivo, ios::in);
	
	if (archivo.is_open()){
		string linea, raza;
		
		cout << "Raza de los perros:" << endl;
		cout << endl;
		cout << "La raza registrada en el archivo: " << endl;
		while(getline(archivo, linea)){
			stringstream ss(linea);
			getline(ss, raza, ',');
			getline(ss, raza, ',');
			cout << raza << endl;
		}
		archivo.close();
	}else{
		cout << "No se pudo abrir el archivo." << endl;
	}
}
void raza_de_los_gatos(const string &Nombre_del_2archivo){
	ifstream archivo(Nombre_del_2archivo, ios::in);
	
	if (archivo.is_open()){
		string linea, raza;
		
		cout << "raza de los gatos:" << endl;
		cout << "La raza registrada en el archivo: " << endl;
		while(getline(archivo, linea)){
			stringstream ss(linea);
			getline(ss, raza, ',');
			getline(ss, raza, ',');
			cout << raza << endl;
		}
		archivo.close();
	}else{
		cout << "No se pudo abrir el archivo." << endl;
	}
}


int main(){
	string Nombre_archivo = "perros.txt";
	string Nombre_del_2archivo = "gatos.txt";
	int Num;
	Perro perro;
	Gato gato;
	char continuar;
	
	do{
		system("cls"); 
		cout << "PUNTO 3: " << endl;
		cout << endl;
		cout << "1.Registrar perros. " << endl;
		cout << "2.Registrar gatos. "<< endl;
		cout << "3.Ver los nombres de los perros. "<< endl;
		cout << "4.Ver los nombres de los gatos. "<< endl;
		cout << "5.Ver las razas de perros. "<< endl;
		cout << "6.Ver las razas de gatos. "<< endl;
		cout << "7.Salir." << endl;
		cout << "Ingresa un numero: ";
		cin >> Num;
		cin.ignore();
	
		switch(Num){
			case 1:
				do {
					system("cls");
                    Registrar_un_nuevo_perro(perro, Nombre_archivo);
                    
                    cout << "¿Quieres regresar al menu? (s/n): ";
                    cin >> continuar;
                    
                    if (continuar == 's' || continuar == 'S') {
        			break; 
    				}       
                } while (continuar == 'n' || continuar == 'N');
                break;
			case 2:
				do{
					system("cls");
					Registrar_un_nuevo_gato(gato, Nombre_del_2archivo);
				
                    cout << "¿Quieres regresar al menu? (s/n): ";
                    cin >> continuar;
                    
                    if (continuar == 's' || continuar == 'S') {
        			break; 
    				}   
                } while (continuar == 'n' || continuar == 'N');
                break;
			case 3:
				do{
					system("cls");
					Nombre_de_los_perros(Nombre_archivo);
					cout << "¿Quieres regresar al menu? (s/n): ";
                    cin >> continuar;
                    
                    if (continuar == 's' || continuar == 'S') {
        			break; 
    				}       
                } while (continuar == 'n' || continuar == 'N');
				break;
			case 4:
				do{
					system("cls");
					Nombre_de_los_gatos(Nombre_del_2archivo);
					cout << "¿Quieres regresar al menu? (s/n): ";
                    cin >> continuar;
                    
                    if (continuar == 's' || continuar == 'S') {
        			break; 
    				}       
                } while (continuar == 'n' || continuar == 'N');	
				break;
			case 5:
				do{
					system("cls");
					raza_de_los_perros(Nombre_archivo);
					cout << "¿Quieres regresar al menu? (s/n): ";
                    cin >> continuar;
                    
                    if (continuar == 's' || continuar == 'S') {
        			break; 
    				}       
                } while (continuar == 'n' || continuar == 'N');
				break;
			case 6:
				do{
					system("cls");
					raza_de_los_gatos(Nombre_del_2archivo);
					cout << "¿Quieres regresar al menu? (s/n): ";
                    cin >> continuar;
                    
                    if (continuar == 's' || continuar == 's') {
        			break; 
    				}       
                } while (continuar == 'n' || continuar == 'N');
				break;
			case 7:
				cout<< "saliendo del programa... ¡Hasta luego!" <<endl;
				return(1);
				break;
			default:
				cout<<"La opcion no es validad intentalo de nuevo.." << endl;
				break; 		
		}
	}while(true);
	
	return 0;
}
