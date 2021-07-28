# Clase #4 - Condicionales

En esta clase veremos los condicionales y como trabajarlos

Los condicionales son una estructura de control, estas nos permiten establecer una serie de condiciones en nuestro programa. Un ejemplo clásico es si una persona es mayor de edad o no.

Para esto necesitamos aplicar una serie de operadores que veremos a continuación.

## Estructura simple
```cpp
if(condición) {

}
```
El codigo que podemos observar es la estuctura de un condicional en este caso usamos el operador `if` y dentro de los parentesis colocaremos la condicion.

Pero antes de continuar debemos conocer cuales son los operadores relacionales y lógicos que son los que nos permitirán realizar todo tipo de condiciones en nuestros programas.

## Operadores Relacionales

| Símbolo | Descripción       |
| ------- | ----------------- |
| >       | Mayor que         |
| >=      | Mayor o igual que |
| <	      | Menor que         |
| <=	    | Menor o igual que |
| ==	    | Igualación        |
| !=	    | Diferente         |

Usemos algun operador de ejemplo.

```cpp
int edad = 18;

if(edad >= 18) {
  cout << "Es mayor de edad";
}
```

## Operadores Lógicos

| Símbolo | Descripción | Funcionamiento               |
| ------- | ----------- | ---------------------------- |
| &&      | Y           | Ambos se deben cumplir       |
| \|\|    | O           | Al menos uno se debe cumplir |
| !       | NO          | Negación                     |

Usemos algun operador de ejemplo.

```cpp
int nota = 15;
if(nota >= 10 && nota <= 20) {
  cout << "Aprobado"; //Output: Aprobado
}
```
En el ejemplo podemos observar que la nota a evaluar es `15` y al cumplir (mayor o igual que 10 y menor o igual que 20) con ambas condiciones nos muestra `Aprobado` 

## Estructura compuesta
```cpp
if(condición) {
  //código
}
else {
  //código
}
```
Esta estructura compuesta es utilizada cuando queremos indicar otro camino, en pocas palabras si la condicion no se cumple en el `if` entonces va para el `else`
```cpp
int edad = 15
if(edad >= 18) {
  cout << "Mayor de edad";
}
else {
  cout << "Menor de edad";
}
//output: Menor de edad
```
Como se puede observar en el ejemplo la persona tiene `15` años por lo tanto la persona no es mayor de edad y toma lo que esta en `else`

