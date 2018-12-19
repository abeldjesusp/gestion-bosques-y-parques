#include "pch.h"
#include "SysColumn.h"


SysColumn::SysColumn()
{
}
SysColumn::SysColumn(int tabla_id,
	int column_id,
	string name,
	string type,
	int length) {

	this->tabla_id = tabla_id;
	this->column_id = column_id;
	this->name = name;
	this->type = type;
	this->length = length;
}

SysColumn::~SysColumn()
{
}


int SysColumn::getTablaID() {
	return tabla_id;
}
int SysColumn::getColumnID() {
	return column_id;
}
string SysColumn::getName() {
	return name;
}
string SysColumn::getType() {
	return type;
}
int SysColumn::getLength() {
	return length;
}

void SysColumn::setTablaID(int tabla_id) {
	this->tabla_id = tabla_id;
}
void SysColumn::setColumnID(int column_id) {
	this->column_id = column_id;
}
void SysColumn::setName(string name) {
	this->name = name;
}
void SysColumn::setType(string type) {
	this->type = type;
}
void SysColumn::setLength(int length) {
	this->length = length;
}


//methods

void SysColumn::createColumn() {
	ofstream salida;
	salida.open(DIR_ARCHIVO, ios::app);

	if (!salida.good())
		throw "Error al escribir en archivo";

	salida << tabla_id << "|" << column_id << "|" << name << "|" << type << "|" << length << "|"  << endl;
	salida.close();
}


