#include <iostream>

using namespace std;

main() {
	int x, y, suma;
	int resta, multi, division;	
	
	cout << "Ingrese valor 1: ";
	cin >> x;
	
	cout << "Ingrese valor 2: ";
	cin >> y;
	
	suma = x + y;
	resta = x - y;
	multi = x * y;
	division = x / y;
	
	cout << "Suma: " << suma << endl;
	cout << "Resta: " << resta << endl;
	cout << "Multiplicacion: " << multi << endl;
	cout << "Division: " << division << endl;

}