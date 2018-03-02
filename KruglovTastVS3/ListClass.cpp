#include "stdafx.h"
#include "ListClass.h"


ListClass::ListClass()
{
	originList;
}

ListClass::~ListClass()
{
}

void ListClass::insertRandNum(int numOfNum)
{
	srand(time(0));

	for (int i = 0; i < numOfNum; i++)
		originList.push_back(((rand() % 21) + 1));
}

void ListClass::show()
{
	list<int>::iterator i;
	int j = 0;

	for (i = originList.begin(); i != originList.end(); i++, j++)
		cout << j << ". " << *i << endl;
}

void ListClass::specialSort()
{
	list <int> temp;
	list<int>::iterator iterBegin = originList.begin();
	list<int>::iterator iterEnd = originList.end();

	if (originList.size() % 2 == 1)
	{
		for (int i = 0; i < originList.size()/2; i++)
		{
			temp.push_back(*iterBegin);
			iterBegin++;
			iterEnd--;
			temp.push_back(*iterEnd);
		}
		temp.push_back(*iterBegin);
	}
	
	if (originList.size() % 2 == 0)
		for (int i = 0; i < originList.size() / 2; i++)
		{
			temp.push_back(*iterBegin);
			iterBegin++;
			iterEnd--;
			temp.push_back(*iterEnd);
		}

	list<int>::iterator i;
	int j = 0;
	for (i = temp.begin(); i != temp.end(); i++, j++)
		cout << j << ". " << *i << endl;
}