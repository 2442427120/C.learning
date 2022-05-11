#include "5.11_LinkList.h"

status menu(void)
{
	printf("**************************************************\n");
	printf("*******        线性表的链式存储            *******\n");
	printf("*******        1.头插法创建线性表          *******\n");
	printf("*******        2.尾插法创建线性表          *******\n");
	printf("*******        3.打印线性表                *******\n");
	printf("*******        4.按值查询线性表中的元素    *******\n");
	printf("*******        5.按位查询线性表中的元素    *******\n");
	printf("*******        6.插入元素                  *******\n");
	printf("*******        7.删除元素                  *******\n");
	printf("*******        8.修改某位置元素的值        *******\n");
	printf("*******        0.退出                      *******\n");
	printf("**************************************************\n");
}

int main(void)
{
	LinkList L;
	L = (LinkList)malloc(sizeof(LNode));
	if (L == NULL)
	{
		return;
	}
	int choose = 0;
	Init_LinkList(L);
	do
	{
		menu();
		printf("请选择相应的功能:>");
		scanf("%d", &choose);

		switch (choose)
		{
		case 1:
			Creat_LinkList_Head(L);
			break;
		case 2:
			Creat_LinkList_Tail(L);
			break;
		case 3:
			Print_LinkList(L);
			break;
		case 4:
			Serach_by_Elem(L);
			break;
		case 5:
			Search_by_Pos(L);
			break;
		case 6:
			Inser_Elem(L);
			break;
		case 7:
			Delete_Elem(L);
			break;
		case 8:
			Modefy_Elem(L);
			break;
		case 0:
			printf("退出成功\n");
			break;
		default:
			printf("输入的值非法，请重新输入\n");
			break;
		}
	} while (choose);

	return 0;
}