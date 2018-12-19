#pragma once
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class SysColumn
{
private:
	int tabla_id;
	int column_id;
	string name;
	string type;
	int length;
	 
public:
	const string DIR_ARCHIVO = "SysColumn.txt";
	SysColumn();
	SysColumn(int tabla_id,
	int column_id,
	string name,
	string type,
	int length);

	~SysColumn();

	//Getters
	int getTablaID();
	int getColumnID();
	string getName();
	string getType();
	int getLength();

	//Setters
	void setTablaID(int tabla_id);
	void setColumnID(int column_id);
	void setName(string name);
	void setType(string type);
	void setLength(int length);

	//methods
	void createColumn();

};

