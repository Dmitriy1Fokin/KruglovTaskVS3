#include "stdafx.h"

using namespace std;

typedef enum
{
	LOW = 1,
	NORMAL = 2,
	HIGH = 3
} ElementPriority;

typedef struct
{
	string name;
	ElementPriority priority;
} QueueElement;

class QueueWithPriority
{
public://///////////////////////////////////сделать пиватным и добавить метод show() с отображением всего дека
	deque <QueueElement> allRecords;


public:
	//  онструктор, создает пустую очередь
	QueueWithPriority();

	// ƒеструктор
	~QueueWithPriority();

	// ƒобавить в очередь элемент element с приоритетом priority
	void PutElementToQueue(const QueueElement& element, ElementPriority priority);

	void set1();

	// ѕолучить элемент из очереди
	// метод должен возвращать элемент с наибольшим приоритетом, который был
	// добавлен в очередь раньше других
	QueueElement GetElementFromQueue();

	// ¬ыполнить акселерацию
	void Accelerate();
};

