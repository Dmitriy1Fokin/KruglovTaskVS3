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
	allRecords.push_back(element);
}

QueueElement QueueWithPriority::GetElementFromQueue()
{
	QueueElement temp;
	for (int i = 0; i < allRecords.size(); i++)
		if (allRecords[i].priority = HIGH)
			temp = allRecords[i];

	return temp;
}