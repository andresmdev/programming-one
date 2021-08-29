#include <iostream>

using namespace std;

string nombre;
string apellido;
int notas;
double promedio;
double sum;
int opc;

void registrarEstudiante();
void registrarPromedio(int notas);
void mostrarPromedio();

main() {

	cout << "REGISTRO DE ESTUDIANTES" << endl;
	
	registrarEstudiante();
	
	cout << "REGISTRO DEL PROMEDIO" << endl;

	cout << "ingrese cantidad de notas: ";
	cin >> notas;
	
	registrarPromedio(notas);
	mostrarDatos();
  mostrarPromedio();

}

void registrarEstudiante() {
	cout << "Ingrese nombre: ";
	cin >> nombre;
	
	cout << "Ingrese apellido: ";
	cin >> apellido;
}

void registrarPromedio(int notas) {
	double nota;
	
	for(int i=0; i<notas; i++) {
		cout << "ingrese nota: ";
		cin >> nota;
		sum += nota;
	}
}

void mostrarDatos() {
	cout << "Nombre: " << nombre << endl;
	cout << "Apellido: " << apellido << endl;
}

void mostrarPromedio() {
	double total = sum/notas;

	cout << "El promedio es: " << total << endl;
}
