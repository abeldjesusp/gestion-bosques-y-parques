#include "pch.h"
#include "SysTable.h"


SysTable::SysTable()
{
}

SysTable::SysTable(string name_table) {
	this->table_id++;
	this->name_table = name_table;
}

SysTable::~SysTable()
{
}

//Getters
int SysTable::getTableID() {
	return table_id;
}
string SysTable::getNameTable() {
	return name_table;
}

//Setters
void SysTable::setNameTable(string name_table) {
	this->name_table = name_table;

}

//methods
void SysTable::createTable() {
	ofstream salida;
	salida.open(DIR_ARCHIVO, ios::app);

	if (!salida.good())
		throw "Error al escribir en archivo";

	salida << table_id << "|" << name_table << endl;
	salida.close();
}
