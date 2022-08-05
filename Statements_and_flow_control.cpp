// Statements_and_flow_control.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

//Realizado por: Helberth Cubillo Jarquín / Dayana Xie Li / Isaac Rojas Robles


#include <iostream>

using namespace std;

int main()
{
	cout << "\n\n ***CICLO WHILE / CONDITIONAL OPERATORS*** \n\n" << endl;

	int counter = 1;
	while (counter <= 100)
	{
		counter % 3 == 0 ? cout << "El cociente: " << counter / 3 << endl : cout << "";
		counter % 5 == 0 ? cout << counter << endl : cout << "";
		counter % 7 == 0 ? cout << counter << " " << "suerte" << endl : cout << "";
		++counter;
	}
	
	cout << "\n\n ***CICLO FOR / IF*** \n\n" << endl;

	for (int n = 1; n != 101; n++) {
		
		if (n % 5 == 0)
			cout << n << endl;
		
		if (n % 3 == 0)
			cout << "El cociente: " << n / 3 << endl;
	
		if (n % 7 == 0)
			cout << n << " suerte" << endl;
		
	}

	cout << "\n\n ***CICLO DO - WHILE / SWITCH*** \n\n" << endl;

	int contador = 1;

	do {
		
		switch (contador % 5) {
		case 0: cout << contador << endl; break;
		}
		switch (contador % 3) {
		case 0: cout << "El cociente: " << contador / 3 << endl; break;
		}
		switch (contador % 7) {
		case 0: cout << contador << " suerte" << endl; break;
		}
		++contador;

	} while (contador <= 101);
}

