#include <iostream>

using namespace std;

int main() {
    int filas, columnas;
    
    cout << "PUNTO 4";
    cout << endl;
    cout << "Ingresa el numero de filas: ";
    cin >> filas;
    
    cout << "Ingresa el numero de columnas: ";
    cin >> columnas;

    int matriz1[filas][columnas];
    int matriz2[filas][columnas];
    int suma[filas][columnas];

    
    cout << endl;
    cout << "MATRIZ 1:" << endl;
    cout << "Ingresa los valores para la primera matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Matriz 1, valor [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    
    cout << endl;
    cout << "MATRIZ 2:" << endl;
    cout << "Ingresa los valores para la segunda matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Matriz 2, valor [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            suma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    
    cout << endl;
    cout << "La matriz resultante de la suma es:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << suma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


		
	
	
	

