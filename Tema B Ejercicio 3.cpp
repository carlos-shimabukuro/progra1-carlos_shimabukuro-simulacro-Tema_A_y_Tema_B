// ConsoleApplication16.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

/*
Test
Ingrese la vista (M: Mar, I: Interior): I
Día de ingreso (L: lunes-jueves; V: viernes o sábado; D: domingo): L
Camas: 1
Precio del ticket: 15,7
*/
int main()
{
	//Variables
	char vista, diaI;
	int numeroC;
	double precioB, precioF;

	//Datos de entrada
	cout << "Ingrese la vista (M: Mar; I: Interior) : " << endl;
	cin >> vista;
	cout << "Dia de ingreso (L: Lunes - Jueves; V: Viernes o Sabado; D: Domingo) : " << endl;
	cin >> diaI;
	cout << "Numero de camas : " << endl;
	cin >> numeroC;

	//Logica
	precioB = ((vista == 'M') && (diaI == 'L')) * 20.4 + ((vista == 'M') && (diaI == 'V')) * 80.8 + ((vista == 'M') && (diaI == 'D')) * 70.1;
	precioB = ((vista == 'I') && (diaI == 'L')) * 15.7 + ((vista == 'I') && (diaI == 'V')) * 60.7 + ((vista == 'I') && (diaI == 'D')) * 65.8;

	precioF = (numeroC = 1) * precioB + ((2 <= numeroC) && (numeroC <= 3)) * (precioB + (precioB * 0.12)) + (3 < numeroC) * (precioB + (precioB * 0.25));

	//Datos de salida
	cout << "Precio del ticket : " << precioF << endl;

	_getch();
    return 0; 
}
