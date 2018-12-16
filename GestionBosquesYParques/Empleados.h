#pragma once
#include <string>
#include <vector>

#include "Persona.h"
class Empleados : Persona
{
private:
	int emp_id;
	string emp_ocupacion;
	float emp_sueldo;
	int pers_cedula;
	int gest_id;
public:
	Empleados();
	Empleados(int pers_cedula,
		string pers_nombre,
		string pers_apellido,
		string pers_estadoCivil,
		string pers_nacionalidad,
		string pers_telefono,
		int emp_id,string emp_ocupacion, float emp_sueldo, int gest_id);
	~Empleados();

	//method

	void Alta();
	void Baja();
	void Search();
};

