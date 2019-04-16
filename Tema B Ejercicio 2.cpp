// ConsoleApplication15.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

/*
Test
Ingrese las ventas del colaborador: 20
Ingrese el código de la tienda: L
El sueldo correspondiente es: 1237.5 
*/
int main()
{
	//Variables
	int numeroV;
	char codigoT;
	int sueldoB = 900;
	double sueldo1, sueldoF;

	//Datos de entrada
	cout << "Ingrese las ventas del colaborador : " << endl;
	cin >> numeroV;
	cout << "Ingrese el codigo de la tienda (M: Miraflores; S: Surco; L: Lurin; A: Ancon) : " << endl;
	cin >> codigoT;

	//Logica
	sueldo1 = (numeroV = 0) * sueldoB + ((1 <= numeroV) && (numeroV <= 5)) * (sueldoB + (sueldoB * 0.1)) + ((5 < numeroV) && (numeroV <= 10)) * (sueldoB + (sueldoB * 0.15)) + (10 < numeroV) * (sueldoB + (sueldoB * 0.25));
	sueldoF = (codigoT == 'M') * (sueldo1 + (sueldo1 * 0.02)) + (codigoT == 'S') * (sueldo1 + (sueldo1 * 0.05)) + (codigoT == 'L') * (sueldo1 + (sueldo1 * 0.1)) + (codigoT == 'A') * (sueldo1 + (sueldo1 * 0.15));

	//Datos de salida
	cout << "El sueldo correspondiente es : " << sueldoF << endl;

	_getch();
return 0; 
}
