#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <string.h>
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}

	//1.��λ�ļ�ָ��λ��
	fseek(pf, 4, SEEK_CUR);//SEEK_CUR - �ļ�ָ��ĵ�ǰλ�ö�ȡ  SEEK_END - �ļ�ָ���ĩβ����ȡ  SEEK_SET - �ļ�ָ�����ʼλ�ÿ�ʼ
	//2.��ȡ�ļ�����
	char ch = fgetc(pf);
	printf("%c\n",ch);

	fclose(pf);
	pf = NULL;

	return 0;
}
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	/*struct S s = { "����",25,88.5 };*/
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�����Ƶ���ʽ���ļ�
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n",tmp.name, tmp.age, tmp.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "����",25,88.5 };
//	FILE* pf = fopen("test.txt","wb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 1024,3.14f,"hello" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	/*printf("%s\n",buf);*/
//
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
//	sscanf(buf,"%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//
//	return 0;
//}
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 1024,3.14f,"hello" };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	//��ʽ������������
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 1024,3.14f,"hello" };
//	FILE* pf = fopen("test.txt","w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	//��ʽ������ʽд�ļ�
//	fprintf(pf,"%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}
//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ
//	//fputs(buf, stdout);//�ӱ�׼�������ȡ
//
//	gets(buf);
//	puts(buf);
//
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//
//	fputs("hello\n",pf);//fputs�������Լ���\n
//	fputs("world",pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//��ȡ�ļ��е�����
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt","r");
//
//    fgets(buf,1024,pf);
//	printf("%s",buf);
//	fgets(buf, 1024, pf); //fgets�����Ὣ\n������
//	printf("%s", buf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt","w");
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//
//	fputc('h', pf);
//	fputc('e', pf);
//	fputc('l', pf);
//	fputc('l', pf);
//	fputc('o', pf);
//
//	fclose(pf);
//	pf == NULL;
//
//	return 0;
//}