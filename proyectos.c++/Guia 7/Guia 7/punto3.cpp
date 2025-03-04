#include <iostream>
using namespace std;

struct Estudiante {
    string Nombre;
    string Apellido;
    int Edad;
};
void actualizar(Estudiante &estudiante, string nuevoNombre, string nuevoApellido, int nuevaEdad) {
    estudiante.Nombre = nuevoNombre;
    estudiante.Apellido = nuevoApellido;
    estudiante.Edad = nuevaEdad;
    cout << "Datos del estudiante actualizados correctamente: " << endl;
    cout << endl;
    cout << "Nombre: " << estudiante.Nombre << endl;
    cout << "Apellido: " << estudiante.Apellido << endl;
    cout << "Edad: " << estudiante.Edad << endl;
    cout << endl;
}

int main() {
    Estudiante estudiantes[5] = {
        {"Carlos", "Perez", 20},
        {"Ana", "Gomez", 22},
        {"Luis", "Rodriguez", 19},
        {"Marta", "Lopez", 21},
        {"Pedro", "Martinez", 23}
    };
    
    cout << "Punto 3."
    cout << endl;
    cout << "Datos registrados de los estudiantes:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Estudiante " << i + 1 << endl;
        cout << "Nombre: " << estudiantes[i].Nombre << endl;
        cout << "Apellido: " << estudiantes[i].Apellido << endl;
        cout << "Edad: " << estudiantes[i].Edad << endl;
        cout << endl;
    }

    for (int i = 0; i < 5; i++) {
        string nuevoNombre, nuevoApellido;
        int nuevaEdad;

        cout << "Actualizar datos del estudiante " << i + 1 << endl;
        cout << "Nuevo Nombre: ";
        cin >> nuevoNombre;
        cout << "Nuevo Apellido: ";
        cin >> nuevoApellido;
        cout << "Nueva Edad: ";
        cin >> nuevaEdad;

        actualizar(estudiantes[i], nuevoNombre, nuevoApellido, nuevaEdad);
    }
    cout << "Actualizacion de datos terminada, gracias...";
    
    return 0;
}

