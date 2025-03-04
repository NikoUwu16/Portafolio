#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

struct Cliente {
    int identificacion;
    string Nombre;
    float Saldo;
};

void registrar(Cliente &C, const string &Archivo_clientes) {
    ofstream archivo(Archivo_clientes, ios::app);
    
    if (archivo.is_open()) {
    	cout << "Registrar un nuevo cliente. " << endl;
    	cout << endl; 
        cout << "Numero de identificacion: ";
        cin >> C.identificacion; 
        cin.ignore(); 
        
        cout << "Nombre del cliente: ";
        getline(cin, C.Nombre); 
        
        cout << "Saldo: ";
        cin >> C.Saldo; 
        
        archivo << C.identificacion << ',' << C.Nombre << ',' << C.Saldo << endl;
        
        archivo.close();
        cout << "Datos completados..." << endl;
    } else {
        cout << "No se pudo abrir el archivo..." << endl;
    }
}

void buscarCliente(const string &Archivo_clientes) {
    ifstream archivo(Archivo_clientes);
    
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
        return;
    }
    
    string linea;
    string identificacionBuscada;
    cout << "Buscar cliente: " << endl;
    cout << endl;
    cout << "Ingresa el numero de identificacion a buscar: ";
    cin >> identificacionBuscada;

    bool encontrado = false;

    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string identificacion, Nombre;
        float Saldo;
        
        getline(ss, identificacion, ',');
        getline(ss, Nombre, ',');
        ss >> Saldo;

        
        if (identificacion == identificacionBuscada) {
            cout << "Cliente encontrado:" << endl;
            cout << endl;
            cout << "Identificacion: " << identificacion << endl;
            cout << "Nombre: " << Nombre << endl;
            cout << "Saldo: " << Saldo << endl;
            encontrado = true;
            break;
        }
    }
    
    if (!encontrado) {
        cout << "Cliente no encontrado." << endl;
    }
    
    archivo.close();
}

int main() {
    string Archivo_clientes = "Clientes.txt";
    int num;
    Cliente cliente;
    char continuar;
    
    do {
    	system("cls"); 
		cout << "PUNTO 4: " << endl;
		cout << endl;
        cout << "1. Registrar un nuevo cliente." << endl;
        cout << "2. Buscar un cliente." << endl;
        cout << "3. Salir." << endl;
        cout << "Digitar un numero: ";
        cin >> num;
        cin.ignore();
        
        switch (num) {
            case 1:
                do {
                	system("cls");
                    registrar(cliente, Archivo_clientes);
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
                    buscarCliente(Archivo_clientes);
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
                cout << "La opción no es válida, inténtalo de nuevo." << endl;
                break;
        }
        
    } while (true);
    
    return 0;
}

