#pragma once
#include <string>
#include <vector>
#include "TADEntity.h"

using namespace std;

class Parques : TADEntity
{
private:
	int parq_id;
	string parq_nombre;
	string parq_tipo;
	int localizacion_id;
	int gest_id;
public:
	Parques();
	Parques(int parq_id,
	string parq_nombre,
	string parq_tipo,
	int localizacion_id,
	int gest_id);

	~Parques();

	//methods
	void Alta();
	void Baja();
	void Search();
};

