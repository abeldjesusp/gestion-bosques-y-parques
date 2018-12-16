#pragma once
#include <string>

#include <iostream>

using namespace std;

class SysColumn
{
private:
	int tabla_id;
	int column_id;
	string name;
	string type;
	int length;
	int IA;
	 
public:
	SysColumn();
	~SysColumn();
};

