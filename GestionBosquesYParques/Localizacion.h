#pragma once
#include <string>
#include <vector>
#include "TADEntity.h"

using namespace std;

class Localizacion : TADEntity
{
private:
	int localizacion_id;
	string ciudad;
	string extension_teritorial;

public:
	Localizacion();
	Localizacion(int localizacion_id, string ciudad, string extension_teritorial);
	~Localizacion();

	void Alta();
	void Baja();
	void Search();
};

