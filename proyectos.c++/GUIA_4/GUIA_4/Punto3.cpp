#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main(){
	int NumeroDejugadores;
	
	cout << "punto 3"<< endl;
	cout << endl;
	cout << "Escribe el numero de jugadores que van a participar: ";
	cin >> NumeroDejugadores;
	
	string Arreglo[NumeroDejugadores];
	
	cout << endl;
	for(int NombreDejugadores = 0;NombreDejugadores < NumeroDejugadores;NombreDejugadores++){
		cout << "Escribir los nombres de los participantes " << NombreDejugadores + 0 << ": ";
		cin >> Arreglo[NombreDejugadores];
	}
	
	srand(time(NULL));
	
	int Indicedelganador= rand()% NumeroDejugadores;
	
	cout << endl;
	cout << "El ganador es el numero "<< Indicedelganador << " y su nombre es "<< Arreglo[Indicedelganador]<< ". " << endl;
	
	cout << endl;
	cout << "adios" << endl;
	
	
	
	return 0;
}
