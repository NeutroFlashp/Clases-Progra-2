#pragma once
#include <iostream>
using namespace std;

int menu() {
	
	int opcion;
	do
	{
		cout << "------------------MENU-----------------" << endl;
		cout << "1.- Mostrar Contactos" << endl;
		cout << "2.- Agregar Contactos" << endl;
		cout << "3.- Salir" << endl;
		cout << endl;
		cout << endl;
		cout << "Elegir Opcion ...... ";
		cin >> opcion;

	} while (opcion<1 || opcion>3);

	return opcion;

}