#include "stdafx.h"

using namespace std;

typedef enum
{
	LOW,
	NORMAL,
	HIGH
} ElementPriority;

typedef struct
{
	string name;
	ElementPriority priority;
} QueueElement;

class QueueWithPriority
{
private://///////////////////////////////////сделать пиватным и добавить метод show() с отображением всего дека
	deque <QueueElement> allRecords;


public:
	//  онструктор, создает пустую очередь
	QueueWithPriority();

	// ƒеструктор
	~QueueWithPriority();

	// ƒобавить в очередь элемент element с приоритетом priority
	void PutElementToQueue(const QueueElement& element, ElementPriority priority);

	// ѕолучить элемент из очереди
	// метод должен возвращать элемент с наибольшим приоритетом, который был
	// добавлен в очередь раньше других
	QueueElement GetElementFromQueue();

	void showAllRecords();
	void showRecord(QueueElement &element);

	// ¬ыполнить акселерацию
	void Accelerate();
};

