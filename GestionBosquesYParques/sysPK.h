#pragma once
class sysPK
{
private:
	int column_id;
	int table_id;
public:
	sysPK();
	sysPK(int column_id, int table_id);
	~sysPK();

	//Getter
	int getPK();
	int getTable_id();

	//setter
	void setColumn_id(int column_id);
	void setTable_id(int table_id);
};

