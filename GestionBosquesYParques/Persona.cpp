#include "pch.h"
#include "Persona.h"


Persona::Persona()
{
}


Persona::Persona(int pers_cedula,
	string pers_nombre,
	string pers_apellido,
	string pers_estadoCivil,
	string pers_nacionalidad,
	string pers_telefono,
	int visitante_id,
	int emp_id) {

	this->pers_cedula = pers_cedula;
	this->pers_nombre = pers_nombre;
	this->pers_apellido = pers_apellido;
	this->pers_nacionalidad = pers_nacionalidad;
	this->pers_telefono = pers_telefono;
	this->visitante_id = visitante_id;
	this->emp_id = emp_id;
}


Persona::~Persona()
{
}

void Persona::Alta() {
	vector <string> vPersona;
	
}

