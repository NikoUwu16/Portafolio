#include <iostream>


using namespace std;

int main(){
	const int n=10;
	int Num1[n];
	
	cout << "punto 6. "<< endl;
	cout << endl;
	
	for(int i=0;i<n;i++){
		cout<< "Escribir un Numero: ";
		cin >> Num1[i];
	}
	
	cout << endl;
	cout << "Resultados:" << endl;
	cout << endl;
	
    for (int i = 0; i < n; i++) {
        if (Num1[i] > 0) {
            cout << "El numero " << Num1[i] << " es positivo." << endl;
        } else if (Num1[i] < 0) {
            cout << "El numero " << Num1[i] << " es negativo." << endl;
        }
	}
	return 0;
}


