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
private://///////////////////////////////////������� �������� � �������� ����� show() � ������������ ����� ����
	deque <QueueElement> allRecords;


public:
	// �����������, ������� ������ �������
	QueueWithPriority();

	// ����������
	~QueueWithPriority();

	// �������� � ������� ������� element � ����������� priority
	void PutElementToQueue(const QueueElement& element, ElementPriority priority);

	// �������� ������� �� �������
	// ����� ������ ���������� ������� � ���������� �����������, ������� ���
	// �������� � ������� ������ ������
	QueueElement GetElementFromQueue();

	void showAllRecords();
	void showRecord(QueueElement &element);

	// ��������� �����������
	void Accelerate();
};

