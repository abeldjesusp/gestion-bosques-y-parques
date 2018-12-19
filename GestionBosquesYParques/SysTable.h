#pragma once
#include <string>
#include <fstream>

using namespace std;
class SysTable
{
private:
	int table_id;
	string name_table;
public:
	const string DIR_ARCHIVO = "SysTable.txt";
	SysTable();
	SysTable(string name_table);
	
	~SysTable();

	//Getters
	int getTableID();
	string getNameTable();

	//Setters
	void setNameTable(string name_table);

	//methods
	void createTable();
};

