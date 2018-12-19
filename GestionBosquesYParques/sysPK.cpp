#include "pch.h"
#include "sysPK.h"


sysPK::sysPK()
{
}

sysPK::sysPK(int column_id, int table_id) {
	this->column_id = column_id;
	this->table_id = table_id;
}
sysPK::~sysPK()
{
}

//Getter
int sysPK::getColumn_id() {
	return column_id;
}
int sysPK::getTable_id() {
	return table_id;
}

//setter
void sysPK::setColumn_id(int column_id) {
	this->column_id = column_id;
}
void sysPK::setTable_id(int table_id) {
	this->table_id = table_id;
}

//methods
void sysPK::createSysPK() {
	ofstream salida;
	salida.open(DIR_ARCHIVO, ios::app);

	if (!salida.good())
		throw "Error al escribir en archivo";

	salida << table_id << "|" << column_id << endl;
	salida.close();
}

