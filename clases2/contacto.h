#pragma once
#include <iostream>
using namespace std;

class Contacto
{
public:
	Contacto();
	Contacto(string pNimbre, string pNumero, string pCorreo);
	~Contacto();

	//Metodos de acceso

	//GET (llamar)
	string get_Nombre();
	string get_Numero();
	string get_Correo();


	//SET (modificar)
	void set_Nombre(string Valor);
	void set_Numero(string Valor);
	void set_Correo(string Valor);
private:
	string Nombre;
	string Numero;
	string Correo;
};

//IMPLEMENTACION
Contacto::Contacto(void)
{
	Nombre = "Miguel Lorenzo";
	Numero = "12345678";
	Correo = "neutroflashp@hotmail.com";
}

Contacto::Contacto(string pNombre, string pNumero, string pCorreo) {
	Nombre = pNombre;
	Numero = pNumero;
	Correo = pCorreo;
}

Contacto::~Contacto(){}

string Contacto::get_Nombre() {
	return this->Nombre;
}
string Contacto::get_Numero() {
	return this->Numero;
}
string Contacto::get_Correo() {
	return this->Correo;
}

//SET (modificar)
void Contacto::set_Nombre(string Valor) {
	Nombre = Valor;
}
void Contacto::set_Numero(string Valor) {
	this->Numero = Valor;
}
void Contacto::set_Correo(string Valor) {
	this->Correo = Valor;
}

