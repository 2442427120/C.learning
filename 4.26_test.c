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

	//1.定位文件指针位置
	fseek(pf, 4, SEEK_CUR);//SEEK_CUR - 文件指针的当前位置读取  SEEK_END - 文件指针的末尾处读取  SEEK_SET - 文件指针的起始位置开始
	//2.读取文件内容
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
//	/*struct S s = { "张三",25,88.5 };*/
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//二进制的形式读文件
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
//	struct S s = { "张三",25,88.5 };
//	FILE* pf = fopen("test.txt","wb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//二进制的形式写文件
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
//	//把格式化的数据转换成字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	/*printf("%s\n",buf);*/
//
//	//从buf中读取格式化的数据到tmp中
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
//	//格式化的输入数据
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
//	//格式化的形式写文件
//	fprintf(pf,"%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}
//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//从标准输入流读取
//	//fputs(buf, stdout);//从标准输出流读取
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
//	fputs("hello\n",pf);//fputs函数需自己补\n
//	fputs("world",pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//读取文件中的内容
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt","r");
//
//    fgets(buf,1024,pf);
//	printf("%s",buf);
//	fgets(buf, 1024, pf); //fgets函数会将\n读进来
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