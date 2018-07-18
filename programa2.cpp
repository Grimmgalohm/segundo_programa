//Programa de suma que muestra la suma de dos enteros

#include <iostream> //permite al programa realizar operaciones de entrada y salida

int main()
{
//se declaran las variables con int, similar a var en Js
int numero1; //primer entero a sumar
int numero2; //segundo entero a sumar
int suma; //suma de entero 1 y 2

std::cout << "Escriba el primer entero "; //pide los datos al usuario
std::cin >> numero1; //recibe el primer entero y lo asigna a int numero1

std::cout << "Escriba el segundo entero ";//pide datos al usuario
std::cin >> numero2; //recibe el segundo entero y lo asigna a int numero2

suma = numero1 + numero2;

std::cout << "La suma es: " << suma << std::endl;//muestra la suma, fin de la linea

return 0; //indica que el programa terminó correctamente

}//fin de la función main
