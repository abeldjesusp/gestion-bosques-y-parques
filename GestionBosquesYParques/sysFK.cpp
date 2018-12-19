#include "pch.h"
#include "sysFK.h"

sysFK::sysFK()
{
}

sysFK::sysFK(int column_id, int table_id, sysPK *syspk) {
	this->column_id = column_id;
	this->table_id = table_id;
	this->syspk = syspk;
}

sysFK::~sysFK()
{
}

//Getters
int sysFK::getColumn_id() {
	return column_id;
}
int sysFK::getTable_id() {
	return table_id;
}
sysPK sysFK::getSyspk() {
	return *syspk;
}

//Setters
void sysFK::setColumn_id(int column_id) {
	this->column_id = column_id;	
}
void sysFK::setTable_id(int table_id) {
	this->table_id = table_id;	
}
void sysFK::setSyspk(sysPK *syspk) {
	this->syspk = syspk;
}

void sysFK::createsysFK() {
	ofstream salida;
	salida.open(DIR_ARCHIVO, ios::app);

	if (!salida.good())
		throw "Error al escribir en archivo";

	salida << table_id << "|" << column_id << "|" << syspk->getTable_id() << "|"  << syspk->getColumn_id() << endl;
	salida.close();
}