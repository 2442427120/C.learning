#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include<ctype.h>
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* start = dest;
//
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else if (dest > src)
//	{
//		while (num--)
//		{
//			(*(char*)dest + 5) = (*(char*)src + 5);
//		}
//	}
//}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9, 10 }; //�����ڴ����õ������
	int i = 0;

	/*memmove(arr + 2, arr, 20);*/
	my_memmove(arr + 2, arr, 20);

	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}

}
//memcpy�������÷����Զ���memcpy����
//struct s
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	//*dest;//err void*���Ͳ��ܽ����ã�++��--
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* start = dest;
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return start;
//}

//int main()
//{
//	/*int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };*/
//	struct s arr3[] = { {"����",25},{"����",30} };
//	struct s arr4[2] = { 0 };
//	int i = 0;
//
//	//memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr4, arr3,sizeof(arr3));
//
//	for (i = 0; i < (sizeof(arr4) / sizeof(arr4[0])); i++)
//	{
//		printf("%s %d\n",arr4[i].name,arr4[i].age);
//	}
//
//	return 0;
//}
//�ַ�ת������
//int main()
//{
//	//����ĸת��ΪСд��ĸ
//	//char ch = tolower('C');
//	////����ĸת��Ϊ��д��ĸ
//	/*char ch = toupper('d');
//	putchar(ch);*/
//	char arr[] = "Im Am A sTudEnt";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//�ַ����ຯ��
//int main()
//{
//	//char ch = 'w';
//	//char ch = '2';
// //   /*int ret = islower(ch);*/ //�ж��ǲ�����ĸ�ǲ���Сд
//	//int ret = isdigit(ch);//�ж��ַ����Ƿ������֣��Ƿ���һ������0���������Ƿ���0
//	//printf("%d\n",ret);
//	
//	return 0;
//}
//strerror �������÷�
//int main()
//{
//	//������   ������Ϣ
//	//0 -      No error
//	//1 -      Operation not permitted
//	//2 -      No such file or directory
//	//...
//	//errno��һ��ȫ�ֵĴ�����ı���
//	//��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//	/*char* str = strerror(errno);
//	printf("%s\n",str);*/
//
//	//���ļ�
//	// fopen("�ļ���","r"); r - ��ʾ��
//	//����ֵ��FILE* ���ͽ���
//	FILE* ret= fopen("test.txt","r");
//	if (ret == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file sucess\n");
//	}
//	return 0;
//}
//strtok������ʹ�÷���
//int main()
//{
//	char arr[] = "2442427120@qq.com";
//	char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf,arr);//����һ��ԭ�ַ�������ֹԭ�ַ������ݶ�ʧ
//
//	//�и�buf�е��ַ���
//	char* ret = NULL;
//
//	for (ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	//char* ret = strtok(buf,p); //strtok��һ�δ���ʱ����Ԫ�ص�ַ
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);//�ڶ����Ժ󴫲δ���ָ��(NULL)
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	return 0;
//}
//�Զ���ʵ��strstr����
//char* my_strstr(const char* p1, const char* p2)
//{
//	//��p1��p2������һ���µ�ַ�ʹ��p1��p2��ֵ���ᱻ�ı�
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//    char* s2 = NULL;
//    char* cur = (char*) p1;
//
//	//�ַ�����Ϊ�գ�ֻ��'\0'
//	if (*p2 == '\0') // if(!*p2) ,��p2����'\0'ʱ��*p2Ϊ�٣�!*p2��Ϊ��
//	{
//		return (char*) p1;
//	}
//
//	
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*) p2;
//
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//
//		if (*s2 == '\0')
//		{
//			return (char*) cur;//�ҵ����Ӵ�
//		}
//		//�Ż�:��p1�ַ�������С��p2ʱ�������Ҳ���p2���Ӵ��ˣ���ǰ����NULL
//		if (*s1 == '\0')
//		{
//			return NULL; 
//		}
//
//		cur++;//curָ��,��s1��aλ��Ѱ���Ӵ�ʧ��ʱ����cur++,�ڰ�++���ֵ����s1,ʹs2��bλ�ÿ�ʼѰ���Ӵ���
//		      //��һ��b����ʧ�ܣ�cur++����ֵ��s2��ʹ��s2ָ��ڶ���b�ڿ�ʼѰ���Ӵ�
//	}
//	return NULL;//�Ҳ����Ӵ�
//}
//
//int main()
//{
//	const char* p1 = "abbbcdefg";
//	const char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("�Ҳ����Ӵ�");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}
//strstr - �������ַ��� - �Ҳ�������ֵΪNULL(��ָ��),�ҵ��������ַ�����ַ
//int main()
//{
//	const char* p1 = "abcdefabcdef";
//	const char* p2 = "def";
//	char* ret = strstr(p1, p2);//�ҵ����ǵ�һ�����ַ������ֵĵ�ַ
//
//	if (ret == NULL)
//	{
//		printf("�Ҳ������ַ���");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}
//strcmp��strncmp
//int main()
//{
//	const char* p1 = "abcdefg";
//	const char* p2 = "abcghff";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 3);
//
//	printf("%d\n",ret);
//	return 0;
//}
//char* my_strcat(char* front, const const char* back, size_t count)
//{
//	char* start = front;
//
//	while (*front++)
//	{
//		;
//	}
//	front--;
//
//	while (count--)
//	{
//		if (!(*front++ = *back++))
//		{
//			return(start);
//		}
//	}
//	*front = '\0';
//	return(start);
//}
//int main()
//{
//	char arr[30] = "hello";
//	char arr1[] = "world";
//	//strcat(arr, arr1);
//	char* ret = my_strcat(arr, arr, 20);
//	printf("%s\n", arr);
//	return 0;
//}