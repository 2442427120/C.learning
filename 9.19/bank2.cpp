//#include "bank2.h"
//#include <cstdlib>
//
//Queue::Queue(int qs) : qsize(qs)	//成员初始化列表
//{
//	front = rear = NULL;
//	items = 0;
//}
//
////用析构函数来删除队列剩余的空间
////例如，一开始创建了总大小为500的空间，但只有300个入队，只用了300个空间，而在出队中会使这300个空间给删除，但
////还剩200空间，只能通过析构函数来进行删除了
//Queue::~Queue()
//{
//	Node* temp;
//	while (front != NULL)
//	{
//		temp = front;
//		front = front->next;
//		delete temp;
//	}
//}
//
//bool Queue::isempty() const
//{
//	return items == 0;
//}
//
//bool Queue::isfull() const
//{
//	return items == qsize;
//}
//
//int Queue::queuecount() const
//{
//	return items;
//}
//
//bool Queue::enqueue(const Item& item)
//{
//	if (isfull())
//		return false;
//	Node* add = new Node;
//	add->item = item;
//	add->next = NULL;
//	items++;
//	//如果队列为空，创建第一个结点，并将第一个结点设为头结点；否则增加一个结点，且将上一个结点指向新结点
//	if (front == NULL)
//		front = add;
//	else
//		rear->next = add;
//	rear = add;	//将尾结点指向新结点
//	return true;
//}
//
//bool Queue::dequeue(Item& item)
//{
//	if (isempty())
//		return false;
//	item = front->item;
//	items--;
//	Node* temp = front;
//	front = front->next;
//	delete temp;
//	//如果队列中的元素全部出队完成，将尾结点设为空
//	if (items == 0)
//		rear = NULL;
//	return true;
//}
//
//void Customer::set(long when)
//{
//	processtime = rand() % 3 + 1;
//	arrive = when;
//}