#pragma once
#include "contacto.h"

class ListaContacto {
private:
	Contacto** arreglo;
	int N;//tamaño del arreglo
public:
	ListaContacto(void);
	~ListaContacto();
	//metodos
	void AgregarContacto(Contacto* objeto);
	Contacto* ObtenerContacto(int indice);
	void MostrarListaContactos();

	//metodo get
	int get_N();//para obtener tamaño del arreglo
};

ListaContacto::ListaContacto(void) {
	arreglo = nullptr; //inicializar el arreglo en NULL
	N = 0; //tamaño del arreglo
}
ListaContacto::~ListaContacto(){}

//metodos
void ListaContacto::AgregarContacto(Contacto* objeto) {
	//crea arreglo temporarl de tamaño tam + 1
	Contacto** temporal = new Contacto * [N + 1];
	//copia todos los elementos del arreglo al temporal
	for (int i = 0; i < N; i++)
	{
		temporal[i] = arreglo[i];
	}

	//agregar nuevo elemento
	temporal[N] = objeto;
	//actualizar el tamaño del arreglo
	N = N + 1;

	//borrar arreglo original
	if (arreglo != nullptr) delete arreglo;
	//asignamos temporal el arreglo
}

Contacto* ListaContacto::ObtenerContacto(int indice) {
	return arreglo[indice];
}
void ListaContacto::MostrarListaContactos() {
	
	if (arreglo != nullptr)
	{
		//mostrar contactos
		for (int i = 0; i < N; i++)
		{
			cout << arreglo[i]->get_Nombre() << "\t";
			cout << arreglo[i]->get_Numero() << "\t";
			cout << arreglo[i]->get_Correo() << "\t";
		}
	}
	else cout << "No hay contactos...." << endl;
}

//metodo get
int ListaContacto::get_N() {
	return N;
}

