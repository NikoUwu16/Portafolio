#include <iostream>
using namespace std;

int main() {
    string Nombre, Apellido, Color, Equipo;
    int Edad;
    
    cout << "Actividad punto 4." << endl;
    cout << endl;

    cout << "Escribe tu Nombre completo: ";
    getline (cin,Nombre);

    cout << "Escribe tu Apellido completo: ";
    getline(cin,Apellido);

    cout << "Escribe tu edad: ";
   	cin >> Edad;
   	cin.ignore();

    cout << "Escribe tu color favorito: ";
    getline (cin,Color); 
	
    cout << "Escribe tu equipo de futbol: ";
   	getline (cin,Equipo);
   	cout << endl;
    
    cout << "Se guardaron los siguientes datos con exito."<< endl;
    cout << endl;
    cout << "Tu Nombre es " << Nombre << endl;
	cout << "Tu Apellido es " << Apellido << endl;
    cout << "Tu edad es " << Edad << endl;
    cout << "Tu color favorito es " << Color << endl;
    cout << "Tu equipo de futbol es " << Equipo << endl;
    
}

