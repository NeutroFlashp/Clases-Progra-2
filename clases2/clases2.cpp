#include "pch.h"
#include "Lista_Contacto.h"
#include "Mis_Funciones.h"
#include <conio.h>

using namespace System;
using namespace std;

int main() {
	ListaContacto* ObjListaContacto;
	Contacto* ObjContacto;
	//instancia el ObjListaContacto

	ObjListaContacto = new ListaContacto();
	string NombreContacto;
	string NumeroContacto;
	string CorreoContacto;

	while (1)
	{
		Console::Clear();
		int opcion = menu();

		if (opcion == 1) {
			ObjListaContacto->MostrarListaContactos();
		}
		else if (opcion == 2)
		{
			cout << "Ingresa el nombre: ";
			cin >> NombreContacto;
			cout << "Ingresa el numero: ";
			cin >> NumeroContacto;
			cout << "Ingresa el correo: ";
			cin >> CorreoContacto;

			//Instancia el objeto contacto
			ObjContacto = new Contacto();
			ObjContacto->set_Nombre(NombreContacto);
			ObjContacto->set_Numero(NumeroContacto);
			ObjContacto->set_Correo(CorreoContacto);
			//agregar al arreglo
			ObjListaContacto-> AgregarContacto(ObjContacto);
		}
		else if (opcion == 3) return 0;
		getch();
	}
	
}