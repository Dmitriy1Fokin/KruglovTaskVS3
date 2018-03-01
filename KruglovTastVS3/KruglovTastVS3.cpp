#include "stdafx.h"
#include"QueueWithPriority.h"



int main()
{
	char answerToExit = 'Y';
	int intPriority;
	string stringRecord;
	//ElementPriority priority;
	QueueWithPriority record;
	QueueElement element;

	
	while (!(answerToExit == 'n') & !(answerToExit == 'N'))
	{
		cout << "Insert string: ";
		cin >> stringRecord;
		cout << "insert priority (0,1,2): ";
		cin >> intPriority;
		element.name = stringRecord;
		
		switch (intPriority)
		{
		case 0: record.PutElementToQueue(element, LOW);		break;
		case 1: record.PutElementToQueue(element, NORMAL);	break;
		case 2: record.PutElementToQueue(element, HIGH);	break;
		default: cout << "Wrong priority!!!" << endl;		break;
		}
		
		cout << "\n repeat? Y/N.\n";
		cin >> answerToExit;
	}

	record.showAllRecords();

	_getch();
	return 0;
}

