#include "stdafx.h"
#include "QueueWithPriority.h"


QueueWithPriority::QueueWithPriority()
{
	allRecords;
}

QueueWithPriority::~QueueWithPriority()
{
}

void QueueWithPriority::PutElementToQueue(const QueueElement& element, ElementPriority priority)
{
	QueueElement temp;
	temp.name = element.name;
	temp.priority = priority;
	allRecords.push_back(temp);
}

QueueElement QueueWithPriority::GetElementFromQueue()
{
	QueueElement temp;
	for (int i = 0; i < allRecords.size(); i++)
		if (allRecords[i].priority == HIGH)
		{
			temp = allRecords[i];
			//break;
			return temp;
		}
			
	for (int i = 0; i < allRecords.size(); i++)
		if (allRecords[i].priority == NORMAL)
		{
			temp = allRecords[i];
			//break;
			return temp;
		}

	for (int i = 0; i < allRecords.size(); i++)
		if (allRecords[i].priority == LOW)
		{
			temp = allRecords[i];
			//break;
			return temp;
		}
}

void QueueWithPriority::showAllRecords()
{
	ElementPriority temp;
	for (int i = 0; i < allRecords.size(); i++)
		switch (allRecords[i].priority)
		{
		case LOW:		cout << i << ". " << allRecords[i].name << "__" << "LOW" << endl;		break;
		case NORMAL:	cout << i << ". " << allRecords[i].name << "__" << "NORMAL" << endl;	break;
		case HIGH:		cout << i << ". " << allRecords[i].name << "__" << "HIGH" << endl;		break;
		}
}

void QueueWithPriority::showRecord(QueueElement &element)
{
	switch (element.priority)
	{
	case LOW:		cout << element.name << "__" << "LOW" << endl;		break;
	case NORMAL:	cout << element.name << "__" << "NORMAL" << endl;	break;
	case HIGH:		cout << element.name << "__" << "HIGH" << endl;		break;
	}
}

void QueueWithPriority::Accelerate()
{
	for (int i = 0; i < allRecords.size(); i++)
		if (allRecords[i].priority == LOW)
			allRecords[i].priority = HIGH;
}