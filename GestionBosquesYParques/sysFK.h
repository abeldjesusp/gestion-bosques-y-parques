#pragma once
#include "sysPK.h"
#include <string>
#include <fstream>


class sysFK
{
private:
	int column_id;
	int table_id;
	sysPK *syspk;
public:
	const string DIR_ARCHIVO = "sysFK.txt";
	sysFK();
	sysFK(int column_id, int table_id, sysPK *syspk);
	~sysFK();

	//Getters
	int getColumn_id();
	int getTable_id();
	sysPK getSyspk();

	//Setters
	void setColumn_id(int column_id);
	void setTable_id(int table_id);
	void setSyspk(sysPK *syspk);

	//methods
	void createsysFK();
};

