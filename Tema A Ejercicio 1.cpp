// ConsoleApplication18.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

/*
Test
Ingrese el tamaño del terreno en metros cuadrados: 100.5
Ingrese el precio por metro cuadrado en dólares: 100
Ingrese el tipo de cambio del día: 3.33 

El precio total de venta en soles del terreno es: 33466.5
*/

int main()
{
	//Variables
	double tamanioT, metroPdollar, tipoC, precioF;

	//Datos de entrada
	cout << "Ingrese el tamaño del terreno en metros cuadrados : " << endl;
	cin >>tamanioT;
	cout << "Ingrese el precio por metro cuadrado en dólares : " << endl;
	cin >> metroPdollar;
	cout << "Ingrese el tipo de cambio del día : " << endl;
	cin >> tipoC;

	//Logica
	precioF = (tipoC * metroPdollar) * tamanioT;

	//Dato de salida
	cout << "El precio total de venta en soles del terreno es : " << precioF;


	_getch();

    return 0; 
}

