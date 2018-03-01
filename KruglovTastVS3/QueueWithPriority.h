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
private:
	deque <QueueElement> allRecords;


public:
	// Конструктор, создает пустую очередь
	QueueWithPriority();

	// Деструктор
	~QueueWithPriority();

	// Добавить в очередь элемент element с приоритетом priority
	void PutElementToQueue(const QueueElement& element, ElementPriority priority);

	// Получить элемент из очереди
	// метод должен возвращать элемент с наибольшим приоритетом, который был
	// добавлен в очередь раньше других
	QueueElement GetElementFromQueue();

	void showAllRecords();
	void showRecord(QueueElement &element);

	// Выполнить акселерацию
	void Accelerate();
};

