# Clase #1 - Entrada y salida de datos

En esta clase veremos las entradas y salidas de datos.

Antes de empezar veremos primeros que son los comentarios.

## Comentarios
Los comentarios son lineas de codigo que no son tomadas en cuentas por el compilador y sirven para documentar o explicar un fragmento de un codigo.

```cpp
//Esto es una linea de comentario

/*
  Esto es un comentario en bloque 
  tambien se le conoce como multi-línea
*/
```

## Tipos de datos
Un tipo de dato informático o simplemente tipo es un atributo de los datos que indica al ordenador (y/o al programador) sobre la clase de datos que se va a trabajar. Esto incluye imponer restricciones en los datos, como qué valores pueden tomar y qué operaciones se pueden realizar.

| Tipos de datos | Explicacion | Ejemplo |
| ------ | ------ | ------ |
| string | Permite ingresar letras o caracteres | "Clase de C++" |
| char   | Permite ingresar letras o caracteres | "Hola" |
| float  | Numeros con decimales con un maximo de 8 decimales | 2.33 |
| double | Numeros con decimales con un maximo de 16 decimales| 3.33 |
| boolean | verdadero y falso | true/false |

Ahora veremos como declarar una variable y asignarle un valor

```cpp
string variable = "Hola a todos !!";
```

## Salida de datos
Mostrar texto por pantalla por C++, para que podamos imprimir necesitamos usar la instrucción `cout` juntos con `<<` y de esa forma podemos ver los datos en la pantalla.
 
```cpp
cout << "Esto se visualizara en la pantalla";
```

En caso de querer imprimir una variable solo tenemos que colocarla como si estuvieramos colocando texto

```cpp
string saludo = "Hola a los nuevos programadores";
cout << saludo;
```

## Entrada de datos
La entrada de datos o lectura de datos es muy simple. Para leer los datos por teclado se hace uso del comando `cin` acompañado de `>>` de esta forma podremos introducir los datos.

👀 PD: ojo con el tipo de dato y lo que introduces.

```cpp
string nombre;

cout << "Introducir nombre: ";
cin >> nombre;

cout << "Mi nombre es: " << nombre << endl;
```

Si viste el comando `endl` te lo explico; se utiliza para dar un salto de linea


