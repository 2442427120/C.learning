#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <errno.h> 
#include <string.h>
//int main()
//{
//	//���ļ�test.txt
//	//���·��
//	//. ��ʾ��ǰ·��
//	//.. ��ʾ��һ��·��
//	//fopen("./test.txt","r");
//	//fopen("../../test.txt","r");
//	//fopen("test.txt","r");
//
//	//����·��
//	/*fopen("D:\c-learning\vs2022code\4.25","r");*/
//
//	//FILE* pf= fopen("test.txt","r"); //�Զ�����ʽ�� - "r"
//	FILE* pf = fopen("test.txt", "w"); //��д����ʽ�� - "w"
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//
//	//�򿪳ɹ�
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//���ļ���д����Ϣ
//int main()
//{
//	 FILE* pfWrite= fopen("test.txt", "w");
//	 if (pfWrite == NULL)
//	 {
//		 printf("%s\n",strerror(errno));
//		 return 0;
//	 }
//	 //д�ļ�
//	 fputc('h',pfWrite);
//	 fputc('e', pfWrite);
//	 fputc('l', pfWrite);
//	 fputc('l', pfWrite);
//	 fputc('o', pfWrite);
//
//	 fclose(pfWrite);
//	 pfWrite = NULL;
//	return 0;
//}

int main()
{
	FILE* pfRead = fopen("test.txt", "r");
	if (pfRead == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//���ļ�
	printf("%c",fgetc(pfRead));//h
	printf("%c", fgetc(pfRead));//e
	printf("%c", fgetc(pfRead));//l
	printf("%c", fgetc(pfRead));//l
	printf("%c", fgetc(pfRead));//o

	fclose(pfRead);
	pfRead = NULL;
	return 0;
}