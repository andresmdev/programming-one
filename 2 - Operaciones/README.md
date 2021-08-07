# Clase #2 - Operaciones matemáticas

En esta clase veremos las operaciones matemáticas basicas

## Operadores
Los operadores aritméticos más habituales son la suma, resta, multiplicación y división.

| Operadores | Significado                  |
| ---------- | ---------------------------- |
| =          | Asignación                   |
| +          | Suma                         |
| -          | Resta                        |
| *          | Multiplicación               |
| /          | División                     |
| %          | Residuo de la división (mod) |


```cpp
int x = 2;
int y = 3;
int suma = 0;

main() {
  suma = x + y;
  cout << "El resultado es: " << suma; //output: 5
}
```
Para efectuar las operaciones solo se debe cambiar el operador.

## Otros Operadores
Asi mismo tenemos una combinación de operadores que permitira efectura las operaciones muchisimos mas rapido y escribiendo menos código. Por ejemplo la combinacion de `+=`

```cpp
int a = 2;

main() {
  a += 3; //a = a + 3
  cout << "El resultado es: " << a; //output: 5
}
```
