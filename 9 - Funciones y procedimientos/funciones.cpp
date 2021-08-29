#include <iostream>

using namespace std;

string nombre;
string apellido;
int dia;
int mes;
int ano;

string Mes(int mes);

main() {
  cout << "Ingrese nombre: ";
	cin >> nombre;
	
	cout << "Ingrese apellido: ";
	cin >> apellido;

  cout << "Ingrese dia de nacimiento: ";
	cin >> dia;
	
	cout << "Ingrese mes de nacimiento ";
	cin >> mes;
	
	cout << "Ingrese ano de nacimiento: ";
	cin >> ano;

	string mesLetra = Mes(mes);
	
	cout << "Fecha de Nacimiento: " << dia << "-" << mes << "-" << ano << endl;
	cout << "Fecha de Nacimiento: " << dia << "-" << mesLetra << "-" << ano << endl;

}

string Mes (int mes) {
	string mesLetra;
	
	switch(mes) {
		case 1:
			mesLetra = "Enero";
		break;
		
		case 2:
			mesLetra = "Febrero";
		break;
	
		case 3:
			mesLetra = "Mayo";
		break;
		
		case 4:
			mesLetra = "Abril";
		break;
		
		case 5:
			mesLetra = "Mayo";
		break;
		
		case 6: 
			mesLetra = "Junio";
		break;
		
		case 7: 
			mesLetra = "Julio";
		break;
		
		case 8: 
			mesLetra = "Agosto";
		break;
		
		case 9: 
			mesLetra = "Septiembre";
		break;
		
		case 10: 
			mesLetra = "Octubre";
		break;
			
		case 11: 
			mesLetra = "Noviembre";
		break;
				
		case 12: 
			mesLetra = "Diciembre";
		break;
		
		default: 
			mesLetra = "Error";
		break;
	}
	
	return mesLetra;
}
