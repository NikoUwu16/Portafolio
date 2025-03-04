#include <iostream>

using namespace std;

int main(){
	int numero ,indice1 ,indice2 ,suma =0;
	char arreglo[numero];
	
	cout << "PUNTO 3"<< endl;
	cout << endl;
	cout << "Escribe el numero de datos que quieres agregar: ";
	cin >> numero;
	cout << endl;
	
	for(int i=0; i<numero;i++){
		cout << "Escribe un Numero: " << i+1<<": ";
		cin >> arreglo[i]; 	
	}
	
	cout << endl;
	cout << "ingresa un indice: ";
	cin >> indice1;
	cout << "ingresar un indice: ";
	cin >> indice2;
	cout << endl;
	
	if(indice1 >= 0&& indice1 < numero&&indice2 >= 0&&indice2 < numero ){
		suma = arreglo[indice1]+arreglo[indice2];
		cout << "La suma de los indice son " << suma << endl;
	}else{
		cout << "Los indice estan fuera de rango" << endl;
		cout << endl;
	}
	
	return 0;
}
