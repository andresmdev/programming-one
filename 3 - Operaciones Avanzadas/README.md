# Clase #3 - Operaciones matemáticas avanzadas

En esta clase veremos las Operaciones matemáticas avanzadas 🤓

PD: No es nada complicado 😅
## Math.h
Es un archivo de cabecera de la librería estándar del lenguaje de programación C diseñado para operaciones matemáticas básicas. Muchas de sus funciones incluyen el uso de números en coma flotante. C++ también implementa estas funciones por razones de compatibilidad y las declara en la cabecera cmath.

👀 Todas las funciones en las que participan ángulos toman y devuelven radianes.

## Funciones
En la siguiente tabla colocare las funciones más utilizadas por los estudiantes y la mayoría de los ejercicios matemáticos.

| Nombre        | Descripción                                              |
| ------------- | ---------------------------------------------------------|
| acos          | arcoseno                                                 |
| asin	        | arcoseno                                                 |
| atan	        | arcotangente                                             |
| atan2	        | arcotangente de dos parámetros                           |
| floor	        | función suelo                                            |
| cos           |	coseno                                                   |
| cosh          |	coseno hiperbólico                                       |
| exp(double x) |	función exponencial, computa                             |
| fabs          |	valor entero                                             |
| ceil          |	menor entero no menor que el parámetro                   |
| fmod          |	residuo de la división de flotantes                      |
| frexp         |	fracciona y eleva al cuadrado.                           |
| ldexp         |	tamaño del exponente de un valor en punto flotante       |
| log           |	logaritmo natural                                        |
| log10         |	logaritmo en base 10                                     |
| modf          |	obtiene un valor en punto flotante íntegro y en partes   |
| pow           |	eleva un valor dado a un exponente,                      |
| sin           |	seno                                                     |
| sinh          |	seno hiperbólico                                         |
| sqrt          |	raíz cuadrada                                            |
| tan           |	tangente                                                 |
| tanh          |	tangente hiperbólica                                     |

Ahora veremos como trabajar con ellos

```cpp
double total = sqrt(5);
cout << "El resultado:  " << total; //2.236067
```
👀 Ojo con el tipo de dato, ya que debe ser double.
