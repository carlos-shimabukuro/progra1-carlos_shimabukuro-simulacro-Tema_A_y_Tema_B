// ConsoleApplication17.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

/*
Test
Ingrese la Aerolínea (L: LATAM, V: Viva): V
Día (L: Lunes - Jueves; V: Viernes o Sabado; D: Domingo): V
Maletas: 0
Precio del ticket: 70.6
*/
int main()
{
	//Variables
	char vista, diaV;
	int numeroM;
	double precioB, precioF;

	//Datos de entrada
	cout << "Ingrese la aerolinea (L: Latam; V: Viva) : " << endl;
	cin >> vista;
	cout << "Dia (L: Lunes - Jueves; V: Viernes o Sabado; D: Domingo) : " << endl;
	cin >> diaV;
	cout << "Numero de maletas : " << endl;
	cin >> numeroM;

	//Logica
	precioB = ((vista == 'L') && (diaV == 'L')) * 70.4 + ((vista == 'L') && (diaV == 'V')) * 100.8 + ((vista == 'L') && (diaV == 'D')) * 90.1;
	precioB = ((vista == 'V') && (diaV == 'L')) * 20.4 + ((vista == 'V') && (diaV == 'V')) * 70.6 + ((vista == 'V') && (diaV == 'D')) * 80.3;

	precioF = (numeroM = 0) * precioB + ((1 <= numeroM) && (numeroM <= 2)) * (precioB + (precioB * 0.15)) + (2 < numeroM) * (precioB + (precioB * 0.3));

	//Datos de salida
	cout << "Precio del ticket : " << precioF << endl;

	_getch();
	return 0;
}
