#pragma once
#include <string>
#include <vector>
#include "TADEntity.h"

using namespace std;

class Persona : TADEntity
{
private:
	int pers_cedula;
	string pers_nombre;
	string pers_apellido;
	string pers_estadoCivil;
	string pers_nacionalidad;
	string pers_telefono;
	int visitante_id;
	int emp_id;

public:
	Persona();
	Persona(int pers_cedula,
	string pers_nombre,
	string pers_apellido,
	string pers_estadoCivil,
	string pers_nacionalidad,
	string pers_telefono,
	int visitante_id,
	int emp_id);

	
	~Persona();

	//Methods
	void Alta();
	void Baja();
	void Search();
};

