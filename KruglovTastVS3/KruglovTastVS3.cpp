#include "stdafx.h"
#include"QueueWithPriority.h"



int main()
{
	char answerToExit = 'Y';
	int intPriority;
	string stringRecord;
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

	cout << "All records:" << endl;
	record.showAllRecords();
	cout << "First record with high priority:" << endl;
	record.showRecord(record.GetElementFromQueue());
	cout << "All records after Accelerate:" << endl;
	record.Accelerate();
	record.showAllRecords();
	cout << "First record with high priority:" << endl;
	record.showRecord(record.GetElementFromQueue());


	_getch();
	return 0;
}

