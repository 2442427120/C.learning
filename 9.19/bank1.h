#pragma once
#pragma once
#ifndef __QUEUE_1_H__
#define __QUEUE_1_H__

class Customer
{
private:
	long arrive;	//顾客到达时间
	int processtime;	//顾客操作时间
public:
	Customer() { arrive = processtime = 0; }
	void set(long when);
	long when() const { return arrive; }
	int ptime() const { return processtime; }
};

typedef Customer Item;

class Queue
{
private:
	enum { Q_SIZE = 10 };
	struct Node { Item item; struct Node* next; };
	Node* front;
	Node* rear;
	int items;	//队列的结点个数
	const int qsize;	//队列的最大长度
	Queue(const Queue& q) : qsize(0) { }
	Queue& operator=(const Queue& q) { return *this; }
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item& item);
	bool dequeue(Item& item);
};

#endif