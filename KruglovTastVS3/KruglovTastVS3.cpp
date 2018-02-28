#include "stdafx.h"
#include"QueueWithPriority.h"



int main()
{
	char answerToExit = 'Y';
	int intPriority;
	string stringRecord;
	ElementPriority priority;
	QueueWithPriority record;
	QueueElement element;

	
	while (!(answerToExit == 'n') & !(answerToExit == 'N'))
	{
		cout << "Insert string: ";
		cin >> stringRecord;
		cout << "insert priority (1,2,3): ";
		cin >> intPriority;
		element.name = stringRecord;
		
		switch (intPriority)
		{
		case 1: record.PutElementToQueue(element, LOW);		break;
		case 2: record.PutElementToQueue(element, NORMAL);	break;
		case 3: record.PutElementToQueue(element, HIGH);	break;
		default: cout << "Wrong priority!!!" << endl;		break;
		}
		
		cout << "\n repeat? Y/N.\n";
		cin >> answerToExit;
	}

	for (int i = 0; i < record.allRecords.size(); i++)
		cout << i << ". " << record.allRecords[i].name << "__" << record.allRecords[i].priority << endl;


	_getch();
	return 0;
}

