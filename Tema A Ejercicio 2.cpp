// ConsoleApplication19.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

/*
Test 
Ingrese código único de contribuyente: 20180912AYAG

Día de alta: 12
Mes de alta: 9
Año de alta: 2018
Empresa de Lima (0: No; 1; Sí): 0
Empresa grande (0: No; 1; Sí): 1
Años operando:0 
*/

int main()
{
	//Variables
	string cadena, anioA, mesA, diaA, lugar, tamanioE;
	int = lugarM

	//Datos de entrada
	cout << "Ingrese codico unico de contribuyente : " << endl;
	getline(cin, cadena);

	//Logica
	anioA = cadena.substr(0, 4);
	mesA = cadena.substr(4, 2);
	anioA = cadena.substr(6, 2);
	lugar = cadena.substr(8, 3);
	tamanioE = cadena.substr(11, 1);

	lugarM = bool(stoi (lugar = 'LIM')) * 1 + bool(stoi (lugar != 'LIM') * 0);




	_getch();
   return 0 ; 
}
\