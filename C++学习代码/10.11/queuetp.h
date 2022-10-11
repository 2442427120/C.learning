#pragma once
#ifndef __QUEUETP_H__
#define __QUEUETP_H__

template <typename T>
class QueueTp
{
private:
	struct Node { T item; struct Node* next; };
	enum {Q_SIZE = 10};
	Node* front;
	Node* rear;
	int items;
	const int qsize;
	QueueTp(const QueueTp& q) : qsize(0) {}
	QueueTp& operator=(const QueueTp& q) { return *this; }
public:
	QueueTp(int qs = Q_SIZE);
	~QueueTp();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const T& item);
	bool dequeue(T& item);
};

template <typename T>
QueueTp<T>::QueueTp(int qs) : qsize(qs)
{
	front = rear = NULL;
	items = 0;
}

template <typename T>
QueueTp<T>::~QueueTp()
{
	Node* temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

template <typename T>
bool QueueTp<T>::isempty() const
{
	return items == 0;
}

template <typename T>
bool QueueTp<T>::isfull() const
{
	return items == qsize;
}

template <typename T>
int QueueTp<T>::queuecount() const
{
	return items;
}

template <typename T>
bool QueueTp<T>::enqueue(const T& item)
{
	if (isfull())
		return false;

	Node* add = new Node;
	add->item = item;
	add->next = NULL;
	items++;
	if (front == NULL)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}

template <typename T>
bool QueueTp<T>::dequeue(T& item)
{
	if (front == NULL)
		return false;

	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;

	if (items == 0)
		rear = NULL;
	return true;
}

#endif




//#pragma once
//#include<iostream>
//using namespace std;
//
//template<class T>
//class QueueTp
//{
//private:
//    struct Node
//    {
//        T item;
//        struct Node* next;
//    };
//    enum { Q_size = 10 };
//    Node* front;
//    Node* rear;
//    int items; //current number of items in Queue
//    const int qsize;
//    QueueTp(const QueueTp& qt) :qsize(0) { }
//    QueueTp& operator=(const QueueTp& qt) { return *this; }
//
//public:
//    QueueTp(int qs = Q_size);
//    ~QueueTp();
//    bool isempty() const;
//    bool isfull() const;
//    int queuecount() const;
//    bool enqueue(const T& item);
//    bool dequeue(T& item);
//};
//
////QueueTp
//template<class T>
//QueueTp<T>::QueueTp(int qs) :qsize(qs)
//{
//    front = rear = NULL;
//    items = 0;
//}
//
//template<class T>
//QueueTp<T>::~QueueTp()
//{
//    Node* temp;
//    while (front != NULL)
//    {
//        temp = front;
//        front = front->next;
//        delete temp;
//    }
//}
//
//template<class T>
//bool QueueTp<T>::isempty() const
//{
//    return items == 0;
//}
//
//template<class T>
//bool QueueTp<T>::isfull() const
//{
//    return items == qsize;
//}
//
//template<class T>
//int QueueTp<T>::queuecount() const
//{
//    return items;
//}
//
//template<class T>
//bool QueueTp<T>::enqueue(const T& item)
//{
//    if (isfull())
//        return false;
//    Node* add = new Node;
//    add->item = item; //set node pointers
//    add->next = NULL;
//    items++;
//    if (front == NULL)
//        front = add;
//    else
//        rear->next = add;
//    rear = add;
//    return true;
//}
//
//template<class T>
//bool QueueTp<T>::dequeue(T& item)
//{
//    if (isempty())
//        return false;
//    item = front->item;
//    items--;
//    Node* temp = front;
//    front = front->next;
//    delete temp;
//    if (front == NULL)
//        //if (items == 0)
//        rear = NULL;
//    return true;
//}
