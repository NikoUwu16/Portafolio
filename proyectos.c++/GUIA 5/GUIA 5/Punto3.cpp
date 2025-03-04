#include <iostream>
#include <cmath>

using namespace std;

double Calculohipotenusa(double Num1, double Num2){
	return sqrt(pow(Num1,2)+pow(Num2,2));
}

int main(){
	double Num1, Num2;
	
	cout << "Punto 3 ." << endl;
	cout << endl;
	
	cout << "Ingresa el primer valor del cateto: ";
	cin >> Num1;
	
	cout << "Ingresa el segundo valor del cateto: ";
	cin >> Num2;
	
	cout << endl;
	cout << "Resultado. " << endl;
	cout << endl;
	
	double Hipotenusa =  Calculohipotenusa(Num1, Num2);
	cout << "La hipotenusa del los dos valores de los catetos [" << Num1 <<"]["<< Num2 << "] es: "<< Hipotenusa << endl;
	
	
	
	return 0;	
}
