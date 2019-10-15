#include <stdio.h>

struct QueueElement 
{
	int value;
	QueueElement* next;
};

struct Queue
{
	QueueElement* head;
	QueueElement* tail;
};

bool isEmpty(Queue *queue)
{

}

void enqueue(Queue *queue, int value)
{
	QueueElement* element = new QueueElement{ value, nullptr };
	if (queue->tail == nullptr)
	{
		queue->head = element;
		queue->tail = element;
	}
	else
	{
		queue->tail->next = element;
		queue->tail = element;
	}
}

int dequeue(Queue *queue)
{

}

int main()
{

}