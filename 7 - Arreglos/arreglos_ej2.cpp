#include <iostream>

using namespace std;

main() {
  int index; 

  cout << "Ingrese cantidad de elementos: ";
  cin >> index;

  int vector[index];
    
  for(int i=0; i<index; i++) {
    cout << "Ingrese valor [" << i << "]: ";
    cin >> vector[i];
  }

  cout << endl;
  cout << "MOSTRAR VALORES" << endl;
  cout << endl;
  
  for(int i=0; i<index; i++) {
    cout << "Valor [" << i << "]: " << vector[i] << endl;
  }
}