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
public://///////////////////////////////////������� �������� � �������� ����� show() � ������������ ����� ����
	deque <QueueElement> allRecords;


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

	// ��������� �����������
	void Accelerate();
};

