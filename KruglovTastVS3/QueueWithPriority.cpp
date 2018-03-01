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
		if (allRecords[i].priority = HIGH)
			temp = allRecords[i];

	return temp;
}

void QueueWithPriority::showAllRecords()
{
	ElementPriority temp;
	for (int i = 0; i < allRecords.size(); i++)
		switch (allRecords[i].priority)
		{
		case LOW: cout << i << ". " << allRecords[i].name << "__" << "LOW" << endl; break;
		case NORMAL: cout << i << ". " << allRecords[i].name << "__" << "NORMAL" << endl; break;
		case HIGH: cout << i << ". " << allRecords[i].name << "__" << "HIGH" << endl; break;
		}
}