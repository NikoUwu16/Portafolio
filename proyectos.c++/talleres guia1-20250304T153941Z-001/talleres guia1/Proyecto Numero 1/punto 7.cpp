#include<iostream>

using namespace std;

int main(){
	const int n=10;
	int Num1;
	int Suma = 0;
	
	cout << "punto 7. "<< endl;
	cout << endl;
	
	for(int i=0;i<n;i++){
		cout<< "Escribir un Numero: ";
		cin >> Num1;
		Suma += Num1; 
	}
	
	cout << "Resultado de la suma: "<<Suma << endl;
}
