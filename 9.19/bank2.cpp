//#include "bank2.h"
//#include <cstdlib>
//
//Queue::Queue(int qs) : qsize(qs)	//��Ա��ʼ���б�
//{
//	front = rear = NULL;
//	items = 0;
//}
//
////������������ɾ������ʣ��Ŀռ�
////���磬һ��ʼ�������ܴ�СΪ500�Ŀռ䣬��ֻ��300����ӣ�ֻ����300���ռ䣬���ڳ����л�ʹ��300���ռ��ɾ������
////��ʣ200�ռ䣬ֻ��ͨ����������������ɾ����
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
//	//�������Ϊ�գ�������һ����㣬������һ�������Ϊͷ��㣻��������һ����㣬�ҽ���һ�����ָ���½��
//	if (front == NULL)
//		front = add;
//	else
//		rear->next = add;
//	rear = add;	//��β���ָ���½��
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
//	//��������е�Ԫ��ȫ��������ɣ���β�����Ϊ��
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