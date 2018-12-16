#pragma once
#include <string>
#include <vector>
#include "TADEntity.h"

using namespace std;

class Gestion : TADEntity
{
private:
	int gest_id;
	string gest_fecha;
	float gest_tarifa;

public:
	Gestion();
	Gestion(int gest_id,
	string gest_fecha,
	float gest_tarifa);

	~Gestion();

	//methods
	void Alta();
	void Baja();
	void Search();
};

