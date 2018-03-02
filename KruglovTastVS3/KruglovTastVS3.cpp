#include "stdafx.h"
#include "QueueWithPriority.h"
#include "ListClass.h"

void Task3_1();
void Task3_2();

int main()
{
	Task3_1();
	//Task3_2();
	

	_getch();
	return 0;
}

void Task3_1()
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

	cout << "\nAll records:" << endl;
	record.showAllRecords();

	cout << "\nFirst record with high priority:" << endl;
	record.showRecord(record.GetElementFromQueue());

	cout << "\nAll records after Accelerate:" << endl;
	record.Accelerate();
	record.showAllRecords();

	cout << "\nFirst record with high priority:" << endl;
	record.showRecord(record.GetElementFromQueue());
}

void Task3_2()
{
	ListClass listWithNum;
	listWithNum.insertRandNum(15);
	listWithNum.show();
	cout << "Special sort:\n";
	listWithNum.specialSort();
}
