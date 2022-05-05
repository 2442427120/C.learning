#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//void InitList(LinkList* L);
//void List_Insert(LinkList* L);

struct Node
{
	int data;
	struct Node* next;

}Node;

typedef struct Node* LinkList;

//初始化
void InitList(LinkList* L)
{
	(*L) = (LinkList)malloc(sizeof(Node));
	if ((*L) == NULL)
	{
		printf("%s\n", strerror(errno));
	}

	(*L)->next = NULL;
}

void List_Insert(LinkList* L)
{
	int n = 0;
	int i = 0;
	LinkList p, q, head;
	head = (LinkList)malloc(sizeof(struct Node));
	if (head == NULL)
	{
		printf("%s\n", strerror(errno));
	}

	head->next = NULL;
	q = head;

	printf("请输入要插入的元素个数\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(struct Node));
		printf("请输入要插入的元素:>");
		scanf("%d", &(p->data));
		/*p->next = head->next;*/
		q->next = p;
		q = p;
	}
	q->next = NULL;

}

//void ShowList(LinkList* L)
//{
//	LinkList p, q;
//
//	while ((p->next) != NULL)
//	{
//		printf("%d ",p->data);
//
//
//	}
//}

int main(void)
{
	LinkList L;

	InitList(&L);
	List_Insert(&L);
	/*ShowList(&L);*/
	return 0;
}


/*线性表的链式存储之单链表的尾插法*/
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//
///*定义变量*/
//typedef int DataType;
//
//typedef struct node {     //定义链表结点数据结构
//	DataType data;
//	struct node* pNext;
//}NODE;
//
//typedef NODE* pNODE;   //定义链表结点类型指针
//
///*函数声明*/
//pNODE createLinkList(void);   //尾插法建立单链表
//void TraverseLinkList(pNODE pHead); //遍历单链表各个结点
//pNODE LocateNode(pNODE pHead, int k); //查找链表中是否存在某个结点
//void InsertLinkList(pNODE pHead, int i, DataType x);  //向链表中插入结点
//DataType DeleteLinkList(pNODE pHead, int i);
//
///*程序正文*/
//
//int main(void) {            //主函数
//	pNODE pHead = NULL;      //
//
//	pHead = createLinkList();  //创建链表，并将头结点地址返回
//	TraverseLinkList(pHead);  //将头结点地址传入遍历函数，遍历链表各个结点
//	pNODE lNode = LocateNode(pHead, 7); //在链表中查找指定的值
//	if (lNode == NULL) {
//		printf("链表中不存在你要查找的值\n");
//	}
//	else {
//		printf("链表中存在你要查找的值\n");
//	}
//	/*printf("向链表中第三个位置插入100\n");
//	InsertLinkList(pHead, 3, 100);*/
//	TraverseLinkList(pHead);
//	printf("删除链表中第四个结点，删除的结点值是%d\n", DeleteLinkList(pHead, 4));
//	TraverseLinkList(pHead);
//
//	return 0;
//}
//
//pNODE createLinkList(void) {
//
//	pNODE pHead, pTail;    //定义头结点指针和尾结点指针
//	int length, i, val;
//	pHead = (pNODE)malloc(sizeof(NODE));  //给头结点在内存中申请地址空间
//	pTail = pHead;   //初始状态头指针和尾指针相同
//
//	if (pHead == NULL) {      //如果头结点申请失败就退出程序
//		printf("内存分配头结点失败.");
//		exit(-1);
//	}
//	printf("请输入链表的结点个数:");
//	scanf("%d", &length);
//	for (i = 0; i < length; i++) {   //手动依次输入新建链表需要的结点值
//		printf("请输入结点%d的值:", i + 1);
//		scanf("%d", &val);
//		pNODE pNew = (pNODE)malloc(sizeof(NODE));  //给新结点在内存中申请地址空间
//		if (pNew == NULL) {   //如果新结点地址分配地址空间失败，就退出程序
//			printf("坑爹啊,没有足够的内存分配了");
//			exit(-1);
//		}
//		pNew->data = val;   //给新结点赋值
//		pTail->pNext = pNew;  //新结点连接到尾结点之后
//		pTail = pNew;  //尾指针指向新结点
//	}
//	pTail->pNext = NULL;	//终端结点指针域置为空,单链表生成
//	return pHead;	//返回链表头结点
//}
//
//void TraverseLinkList(pNODE pHead) {
//	printf("当前链表各个结点的值是:");
//	pNODE pNew = pHead->pNext;  //获取首结点，然后从首结点开始进行遍历
//	while (pNew != NULL) {      //判断下一个结点是否为空，如果不为空，那么就输出结点数据域里的值
//		printf("%d ", pNew->data);
//		pNew = pNew->pNext;
//	}
//	printf("\n");
//}
//
//pNODE LocateNode(pNODE pHead, int k) {  //查看链表中是否存在某个值的结点
//	pNODE pNew = pHead->pNext;
//	while (pNew && pNew->data != k) {
//		pNew = pNew->pNext;
//	}
//	return pNew;
//}
//
//void InsertLinkList(pNODE pHead, int i, DataType x) {   //向链表第i个位置插入结点x
//	pNODE p, s; int j;
//	p = pHead; j = 0;
//	while (p != NULL && j < i - 1) {
//		p = p->pNext;   //是p指向第i-1个结点，即是指向要插入位置的前一个结点
//		j++;
//	}
//	if (p == NULL) {
//		printf("插入位置错误");
//		exit(-1);
//	}
//	s = (pNODE)malloc(sizeof(NODE));  //给新结点申请内存空间
//	s->data = x;						//给新结点数据域赋值
//	s->pNext = p->pNext;              //将新结点指向p指针所指向的结点的下一个结点
//	p->pNext = s;                     //将s结点的地址赋值给p结点所指向结点的指针域，即让i-1位置的结点指向s结点
//}
//
//
//DataType DeleteLinkList(pNODE pHead, int i) {
//	pNODE p, s; int j;
//	DataType x;
//	p = pHead; j = 0;
//	while (p != NULL && j < i - 1) {
//		p = p->pNext;    //是p指向第i-1个结点，即是指向要插入位置的前一个结点
//		j++;
//	}
//
//	if (p == NULL) {
//		printf("删除位置错误");
//		exit(-1);
//	}
//	s = p->pNext;           //s结点就是要被删除的结点
//	p->pNext = p->pNext->pNext;  //s前一个结点跳过s结点直接指向s的下一个结点，此时s结点成了幽灵了
//	x = s->data;  //将s结点的值保存下来
//	free(s);  //在内存空间中将s释放掉
//	return x;
//}