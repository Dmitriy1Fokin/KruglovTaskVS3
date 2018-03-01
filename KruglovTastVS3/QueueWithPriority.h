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
public://///////////////////////////////////������� �������� � �������� ����� show() � ������������ ����� ����
	deque <QueueElement> allRecords;
	//QueueElement elementName;
	//ElementPriority priority;


public:
	// �����������, ������� ������ �������
	QueueWithPriority();

	// ����������
	~QueueWithPriority();

	// �������� � ������� ������� element � ����������� priority
	void PutElementToQueue(const QueueElement& element, ElementPriority priority);

	void set1();

	// �������� ������� �� �������
	// ����� ������ ���������� ������� � ���������� �����������, ������� ���
	// �������� � ������� ������ ������
	QueueElement GetElementFromQueue();

	void showAllRecords();

	// ��������� �����������
	void Accelerate();
};

