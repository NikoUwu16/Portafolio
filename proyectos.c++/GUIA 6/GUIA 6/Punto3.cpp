#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calcularSeno(double angulo) {
    double radianes = angulo * (M_PI / 180.0);
    return sin(radianes);
}

double calculaCoseno(double angulo) {
	double radianes = angulo * (M_PI / 180.0);
    return cos(radianes);
}

double calcularTangente(double angulo) {
   	double sin = calcularSeno(angulo);
   	double cos = calculaCoseno(angulo);
   	return sin/cos;
   
}

int main() {
    int Num1;
    double angulo, tangente;

    do {
        system("cls");

        cout << "Punto 3." << endl;
        cout << endl;
        cout << "Menu principal" << endl;
        cout << "1. Calcular seno" << endl;
        cout << "2. Calcular coseno" << endl;
        cout << "3. Calcular tangente" << endl;
        cout << "4. Salir" << endl;
        cout << "Escribir un número del 1-4: ";
        cin >> Num1;

        switch (Num1) {
            case 1:
            	system("cls");
                cout << "Por favor, escribe un angulo en grados para calcular su seno: ";
                cin >> angulo;
                cout << "El seno de " << angulo << " es: " << fixed << setprecision(2) << calcularSeno(angulo) << endl;
                break;
            case 2:
            	system("cls");
                cout << "Por favor, escribe un angulo en grados para calcular su coseno: ";
                cin >> angulo;
                cout << "El coseno de " << angulo << " es: "<< fixed << setprecision(2) << calculaCoseno(angulo) << endl;
                break;
            case 3:
            	system("cls");
                cout << "Por favor, escribe un angulo en grados para calcular su tangente: ";
                cin >> angulo;
                cout << "La tangente de " << angulo << " es: "<< fixed << setprecision(2) << calcularTangente(angulo)<< endl;
                break;
            case 4:
            	cout << "Saliendo del programa..." << endl;
                return 0;
                break;
            default:
            	system("cls");
                cout << "Opcion no valida" << endl;
                break;
        }

        if (Num1 != 4) {
            cout << endl << "Presiona enter para volver al menu...";
            cin.ignore();
            cin.get();
        }

    } while (Num1 != 4);

    return 0;			
}

