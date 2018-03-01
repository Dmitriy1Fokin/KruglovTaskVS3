#include "stdafx.h"

using namespace std;

class ListClass
{
private:
	list <int> originList;
public:
	ListClass();
	~ListClass();
	void insertRandNum(int numOfNum);
	void show();
	void specialSort();
};

