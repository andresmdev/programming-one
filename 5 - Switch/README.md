# Clase #5 - Switch

En esta clase veremos el switch y como trabajarlos

El switch forma parte de las estrucuta de decisión o condicionales, pero en el caso del switch el trabaja con casos veamos su estructura. 

```cpp
switch(variable) {
  case 1: 
    //código
  break;

  case 2: 
    //código
  break;

  case 3: 
    //código
  break;

  default: 
    //código
  break;
}
```
Como se puede observar su estructura es muy sencilla y facil de trabajar, pero tenemos que tener cuidado con el valor de los `case` ya que solo acepta tipo `int`

El uso del default no es obligatorio pero las buenas practicas indican que se debe utilizar ya que nos indica que si el valor introducido no pertenece a ningun `case` entonce entrara al `default` y de esa manera podemos indicarle al usuario que se ha equivocado de opción 

Ejemplo

```cpp
int opc = 2

switch(opc) {
  case 1: 
    cout << "Caso 1";
  break;

  case 2: 
    cout << "Entre al caso 2";
  break;

  case 3: 
    cout << "Ultimo case";
  break;

  default: 
    cout << "Error, solo hay tres casos";
  break;
}
//output: Entre al caso 2
```
