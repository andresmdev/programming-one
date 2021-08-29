# Clase #9 - Funciones y procedimientos

En esta clase veremos las funciones y los procedimientos.

Las funciones y los procedimientos son de gran utilidad ya que permiten automatizar tareas repetitivas, encapsular el código que utilizamos, e incluso mejorar la seguridad, confiabilidad y estabilidad de nuestros programas. Dominar el uso de funciones es de gran importancia, permiten modularizar nuestro código

## Funciones
Las funciones son un conjunto de procedimiento encapsulados en un bloque, usualmente reciben parámetros, cuyos valores utilizan para efectuar operaciones y adicionalmente retornan un valor.

Veamos su estructura

```
tipo nombredelafuncion([argumentos, argumetos, ...]) {
  /* 
    Código    
  */
  return valor;
}
```
👀 Las funciones retornaran siempre un valor y debe ser el mismo que el tipo de datos de la misma. Ahora veamos como utilizarla

```cpp
bool esMayor(int num);

bool esMayor(int num) {
  if(num >= 18) {
    return true;
  }
  else {
    return false;
  }
}
```
Como podemos observar, se ha declarado una función para determinar si la persona es mayor o no y para eso nos retorna un `boolean` con el valor `true` o `false`. De la misma manera le pasamos un argumento que es la variable `num` que posteriormente se usara en la toma de la decisión.


## Procedimientos
Los procedimientos son similares a las funciones, aunque más resumidos. Debido a que los procedimientos no retornan valores, no hacen uso de la sentencia return para devolver valores y no tienen tipo específico, solo `void`

```cpp
int matriz[][] = { {1,2,3}, {5,7,10}, {9,3,1} }; //matriz definida

cout << "indice 0,0: " << vector[0][0]; //output: 1
cout << "indice 2,1: " << vector[2][1]; //output: 9
cout << "indice 1,2: " << vector[1][3]; //output: 10
cout << "indice 2,2: " << vector[2][2]; //output: 1
```

Para obtener los valores solo hay que indicarle el indice entre los corchetes `[][]` y de esa forma obtendremos el valor.

Veamos un ejemplo de cómo insertar los valores en el arreglo.

```cpp
int matriz[1][1];

cout << "Agregue su valor: ";
cin >> vector[0][0];

cout << "Agregue su valor: ";
cin >> vector[0][1];

cout << "Agregue su valor: ";
cin >> vector[1][0];

cout << "Agregue su valor: ";
cin >> vector[1][1];
```

**Pregunta:** No se ve muy repetitivo todo? 🤔

**Respuesta:** En realidad si, y para eso entonces usemos los ciclos o bucles.

Usando el ciclo `for` podemos recorrer todo el arreglo sin la necesidad de escribir todo de manera manual.

```cpp
int matriz[][] = { {1,2}, {5,7} }; 

for (int i=0; i 2; i++ ) {
		for(int j=0; j<2; j++) {
			cout << "Posicion [" << i << "] [" << j << "]: " << matriz[i][j] << "\t";
		} 
		cout << "\n";
	}

//ouput: Posicion[0][0]: 3    Posicion[0][1]: 2
//ouput: Posicion[0][0]: 5    Posicion[0][1]: 7
```

Aplicando lo mismo con los ciclos o bucles, agreguemos nuevos valores al arreglo

```cpp
int matriz[1][1];
	
for (int i=0; i<1; i++ ) {
  for(int j=0; j<1; j++) {
    cout << "Posicion [" << i << "] [" << j << "]: " ;
    cin >> valor;
    matriz[i][j] = valor;
  } 
}
```
En caso que quisieramos trabajar con arreglos de manera dinamica podemos definirlo despues de saber la cantidad de elementos necesitamos.

```cpp
int index; 
cout << "Ingrese filas: ";
cin >> filas;

cout << "Ingrese columnas: ";
cin >> columnas;

int matriz[filas][columnas]; 

for (int i = 0; i < filas; i++ ) {
  for(int j=0; j < columnas; j++) {
    cout << "Posicion [" << i << "] [" << j << "]: " ;
    cin >> valor;
    matriz[i][j] = valor;
  } 
}
```
Para finalizar, si queremos actualizar algun valor solo debemos indicar la posicion y pasar el valor nuevo.

```cpp
int matriz[][] = { {1,2}, {5,7} }; 

matriz[0][1] = 3;

for (int i=0; i<2; i++ ) {
  for(int j=0; j<2; j++) {
    cout << "Posicion [" << i << "] [" << j << "]: " << matriz[i][j] << "\t";
  } 
  cout << "\n";
}

//ouput: Posicion[0][0]: 1    Posicion[0][1]: 3
//ouput: Posicion[0][0]: 5    Posicion[0][1]: 7
```