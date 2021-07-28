#include <iostream>
#include <math.h>

using namespace std;

main() {
	double base, expo, potencia;
	cout << "Base: ";
	cin >> base;

	cout << "Exponente: ";
	cin >> expo;

	potencia = pow(base, expo);
	
	cout << "El resultado es:  " << potencia << endl;
	
	double raiz;
	cout << "Introducir valor para la raiz cuadrada: ";
	cin >> raiz;
	
	double total_raiz = sqrt(raiz);
	cout << "El resultado de la raiz es:  " << total_raiz << endl;
}