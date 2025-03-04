#include <iostream>
#include <cstdlib>

using namespace std;

int MCD(int a, int b){
	if (b == 0){
		return a;
	}else{
		return MCD(b,a % b);
	}
}

int MCM(int a,int b){
	return (a*b)/MCD(a,b);
}

int CalcularMCM(int Numero1, int Numero2){
	cout << "Ingrese el primer valor para el MCM: ";
	cin >> Numero1;
	
	cout << "Ingrese el segundo valor para el MCM: ";
	cin >> Numero2;
	
 	cout << "El minimo comun multiplo de " << Numero1 << " y " << Numero2 << " es: "<< MCM(Numero1, Numero2) << endl;
}

int CalcularMCD(int Numero1, int Numero2){
	cout << "Ingrese el primer valor para el MCD: ";
	cin >> Numero1;
	
	cout << "Ingrese el segundo valor para el MCD: ";
	cin >> Numero2;
	
 	cout << "El miximo comun divisor de " << Numero1 << " y " << Numero2 << " es: "<< MCD(Numero1, Numero2) << endl;
}	

int main(){
	int Num1;
	int Numero1, Numero2; 
	
	do{
		system("cls");
		
		cout << "Punto 4" << endl;
		cout << endl;
		cout << "MENU DE OPCIONES:" << endl;
		cout << "1. Calcular MCM." << endl;
		cout << "2. Calcular MCD." << endl;
		cout << "3. salir." << endl;
		cout << "Ingresa un numero del 1-3: ";
		cin >>  Num1;
	
		switch(Num1){
			case 1:
				system("cls");
				cout<< "CALCULAR MCM: " << endl;
				cout << endl;
				CalcularMCM(Numero1,Numero2);
				break;
			case 2:
				system("cls");
				cout << "CALCULAR MCD: "<< endl;
				cout << endl;
				CalcularMCD(Numero1, Numero2);
				break;
			case 3:
				exit(0);
				break;
			default:
				cout << "La opcion no es validad." << endl;
				cout << "Vuelve a intentarlo." << endl;
		}
		if (Num1 !=3){
			cout << endl;
			cout << "presiona enter para volver al menu..";
			cin.ignore();
			cin.get();
		}
	}while(Num1 !=3);
	
	return 0;
}
