#pragma once
#include "sysPK.h"

class sysFK
{
private:
	int column_id;
	int table_id;
	sysPK pk;
public:
	sysFK();
	~sysFK();
};

