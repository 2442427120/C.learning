#include "5.11_LinkList.h"

status menu(void)
{
	printf("**************************************************\n");
	printf("*******        ���Ա����ʽ�洢            *******\n");
	printf("*******        1.ͷ�巨�������Ա�          *******\n");
	printf("*******        2.β�巨�������Ա�          *******\n");
	printf("*******        3.��ӡ���Ա�                *******\n");
	printf("*******        4.��ֵ��ѯ���Ա��е�Ԫ��    *******\n");
	printf("*******        5.��λ��ѯ���Ա��е�Ԫ��    *******\n");
	printf("*******        6.����Ԫ��                  *******\n");
	printf("*******        7.ɾ��Ԫ��                  *******\n");
	printf("*******        8.�޸�ĳλ��Ԫ�ص�ֵ        *******\n");
	printf("*******        0.�˳�                      *******\n");
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
		printf("��ѡ����Ӧ�Ĺ���:>");
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
			printf("�˳��ɹ�\n");
			break;
		default:
			printf("�����ֵ�Ƿ�������������\n");
			break;
		}
	} while (choose);

	return 0;
}