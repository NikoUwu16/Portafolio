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

void Cliente_saldo_alto(const string &Archivo_clientes) {
    ifstream archivo(Archivo_clientes);

    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
        return;
    }

    string lineas[100]; 
    int totalClientes = 0;

    string linea;
    while (getline(archivo, linea)) {
        lineas[totalClientes++] = linea; 
    }
    archivo.close();

    for (int i = 0; i < totalClientes - 1; i++) {
        for (int j = i + 1; j < totalClientes; j++) {
            float saldoI, saldoJ;
            stringstream ssI(lineas[i]), ssJ(lineas[j]);
            string temp;
            getline(ssI, temp, ','); 
            getline(ssI, temp, ','); 
            ssI >> saldoI;           

            getline(ssJ, temp, ','); 
            getline(ssJ, temp, ','); 
            ssJ >> saldoJ;           

            if (saldoI < saldoJ) {
                swap(lineas[i], lineas[j]);
            }
        }
    }

    cout << "Clientes ordenados por saldo (mayor a menor):" << endl;
    cout << endl;
    for (int i = 0; i < totalClientes; i++) {
        stringstream ss(lineas[i]);
        string id, nombre;
        float saldo;

        getline(ss, id, ',');
        getline(ss, nombre, ',');
        ss >> saldo;

        cout << "ID: " << id << ", Nombre: " << nombre << ", Saldo: " << saldo << endl;
    }
}


void Cliente_saldo_menor(const string &Archivo_clientes) {
    ifstream archivo(Archivo_clientes);

    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
        return;
    }

    string lineas[100]; 
    int totalClientes = 0;

    string linea;
    while (getline(archivo, linea)) {
        lineas[totalClientes++] = linea; 
    }
    archivo.close();

    
    for (int i = 0; i < totalClientes - 1; i++) {
        for (int j = i + 1; j < totalClientes; j++) {
            float saldoI, saldoJ;
            stringstream ssI(lineas[i]), ssJ(lineas[j]);
            string temp;
            getline(ssI, temp, ','); 
            getline(ssI, temp, ','); 
            ssI >> saldoI;           

            getline(ssJ, temp, ','); 
            getline(ssJ, temp, ','); 
            ssJ >> saldoJ;          

            if (saldoI > saldoJ) {
                swap(lineas[i], lineas[j]); 
            }
        }
    }

    cout << "Clientes ordenados por saldo (menor a mayor):" << endl;
    cout << endl;
    for (int i = 0; i < totalClientes; i++) {
        stringstream ss(lineas[i]);
        string id, nombre;
        float saldo;

        getline(ss, id, ',');
        getline(ss, nombre, ',');
        ss >> saldo;

        cout << "ID: " << id << ", Nombre: " << nombre << ", Saldo: " << saldo << endl;
    }
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
        cout << "3. Ver el cliente con el saldo mas alto." << endl;
        cout << "4. Ver el cliente con el saldo mas bajo." << endl; 
        cout << "5. Salir." << endl;
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
                do	{
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
            	do	{
            		system("cls");
            		Cliente_saldo_alto(Archivo_clientes);
            		cout << "¿Quieres regresar al menu? (s/n): ";
                    cin >> continuar;
                    cin.ignore();
                    
                    if (continuar == 's' || continuar == 'S') {
                        break;
                    }       
                } while (continuar == 'n' || continuar == 'N');		
            	break;
            case 4:
            	do	{
            		system("cls");
            		Cliente_saldo_menor(Archivo_clientes);
            		cout << "¿Quieres regresar al menu? (s/n): ";
                    cin >> continuar;
                    cin.ignore();
                    
                    if (continuar == 's' || continuar == 'S') {
                        break;
                    }       
                } while (continuar == 'n' || continuar == 'N');
            	break;
            case 5:
                cout << "Saliendo del programa... ¡Hasta luego!" << endl;
                return 0;
            default:
                cout << "La opción no es válida, inténtalo de nuevo." << endl;
                break;
        }
        
    } while (true);
    
    return 0;
}

