#pragma once
#include <vector>
#include <string>
#include "SysColumn.h"
#include "sysPK.h"
#include "sysFK.h"
#include "SysTable.h"

using namespace std;

class TADEntity
{
private:
	vector<SysColumn> systemColumn;
	vector<sysPK> pk;
	vector<sysFK> fk;
	vector<string> Data;
public:
	TADEntity();
	TADEntity(string pTabla);
	~TADEntity();
	 
	//Methods

	void Alta(vector<string> p);
	void Baja(string PKValue);
	void Search(string PKCriterio);
};

