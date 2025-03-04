#include <iostream>

using namespace std;

int main() {

    int CantidadDevalores;
    int Valor = 1;
    
	cout << "Actividad 2." << endl;
	cout << endl;
    cout << "Por favor, escribe un numero para la cantida de valoreas a ingresar: ";
    cin >> CantidadDevalores;
    
    while (Valor <= CantidadDevalores) {
        int Num1;
        cout << "Ingresar un numero: ";
        cin >> Num1;
        
        if (Num1 % 2 == 0) {
            cout << "El numero " << Num1 << " es par." << endl;
        } else {
            cout << "El numero " << Num1 << " es impar." << endl;
        }
        
        Valor++;  
    }
    
    cout << endl;
    cout << "¡Todo listo! Gracias por elegir este programa. ¡Hasta la vista!" << endl;

    return 0;
}

