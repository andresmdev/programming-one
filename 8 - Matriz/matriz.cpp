#include <iostream>

using namespace std;

int filas = 0;
int columnas = 0;
int valor = 0;

main() {
	cout << "Ingrese filas: ";
	cin >> filas;
	
	cout << "Ingrese columnas: ";
	cin >> columnas;
	
	int matriz[filas][columnas]; //{ {1,2,3}, {5,7,9}, {9,3,1} } 
	
	for (int i = 0; i < filas; i++ ) {
		for(int j=0; j < columnas; j++) {
			cout << "Posicion [" << i << "] [" << j << "]: " ;
			cin >> valor;
			matriz[i][j] = valor;
		} 
	}
	
	cout << "**** MATRIZ ****" << endl;
	for (int i = 0; i <filas; i++ ) {
		for(int j=0; j < columnas; j++) {
			cout << "Posicion [" << i << "] [" << j << "]: " << matriz[i][j] << "\t";
		} 
		cout << "\n";
	}
}