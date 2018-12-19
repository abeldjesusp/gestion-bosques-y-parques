#pragma once
#include <fstream>
#include <iostream>

using namespace std;

class sysPK
{
private:
	int table_id;
	int column_id;
	
public:
	const string DIR_ARCHIVO = "sysPK.txt";
	sysPK();
	sysPK(int column_id, int table_id);
	~sysPK();

	//Getter
	int getColumn_id();
	int getTable_id();

	//setter
	void setColumn_id(int column_id);
	void setTable_id(int table_id);

	//methods
	void createSysPK();
};

