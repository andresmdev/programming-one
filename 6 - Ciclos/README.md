# Clase #6 - Ciclos o bucles

En esta clase veremos los ciclos o bucles y como trabajarlo.

Un ciclo o bucle, permite repetir una o varias instrucciones las veces que lo necesitemos, por ejemplo, si quisiéramos imprimir los números del 1 al 100 no tendría sentido escribir 100 líneas, pero con los ciclos podemos hacer muchos más rápidos y menos líneas.


## Estructura

|         | Descripción  | Otra definición | Funcionamiento     |
| ------- | ------------ | --------------- | ------------------ |
| i = 0   | Acumulador   | Valor inicial   | Inicia en 0        |
| i <= 10 | Condición    | Valor final     | Finaliza en 10     |
| i++	    | Contador     | Pasos           | Avanzara de 1 en 1 |


## Ciclo for
```cpp
for(acumulador; condición; contador) {
  //código
}
```

Al ver la estructura del ciclo `for` sabemos que siempre se deben utilizar el acumulador, condición y contador.

```cpp
for(int i=0; i<=10; i++) {
  cont << i << endl;
}

//output: 0
//output: 1
//output: 2
//output: 3
//output: 4
//output: 5
//output: 6
//output: 7
//output: 8
//output: 9
//output: 10
```
Como pudimos ver en el ejemplo, se imprimieron los números del 0 al 10 con solo tres líneas de código.

**Pregunta:** ¿Cómo podemos incrementar de 2 en 2 o más? 🤔

**Respuesta:** Solo deben colocar en el contador `i+=2` y así podrás ir de 2 en 2 si quieres subir la cantidad solo cambia el 2 por otro número.

## Ciclo do/while
```cpp
acumulador;
do {
 contador;
} while (condición);
```
Al ver la estructura de ciclo `do/while` podemos ver que tambien utiliza el acumulador, contador y condicion.

```cpp
int i = 0;

do {
  cout << i << endl;
  i+=3
} while (i<=9);

//output: 0
//output: 3
//output: 6
//output: 9
```
No solo podemos usar el ciclo para contar número, sino que tambien podemos utilizarlo de manera que se detenga cuando nosotros lo indiquemos. 

```cpp
bool sys = true;
int = 0;

do {
  int detener = 0;

  cout << i << endl;
  cout << "Quiere detener el conteo? 0: No / 1: Si";
  cin >> detener;

  if(detener == 1) {
    sys = false;
  }
  else {
    i++
  }
} while (sys == true);
```
Como se puede observar en el código, nosotros podemos decidir si detenemos el conteo o no.

## Ciclo while
Así como los otros dos ciclos podemos trabajar lo mismo con el ciclo. `while`

```cpp
acumulador;

while(condición) {
 contador;
} 
```
Ejemplo de conteo
```cpp
int i = 0;

while(i<=5) {
 cout << i << endl;
} 

//output: 0
//output: 1
//output: 2
//output: 3
//output: 4
//output: 5
```
