#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

//C����ʵ��
//int main(void)
//{
//	int rows = 0;
//
//	printf("Enter number of rows: ");
//	scanf("%d", &rows);
//
//	for (int i = 0; i < rows; i++)
//	{
//		// ��ʾ���
//		for (int period = rows - i - 1; period > 0; --period)
//		{
//			printf(".");
//		}
//
//		//��ʾ�Ǻ�
//		for (int asterisk = 0; asterisk < i + 1; ++asterisk)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

//10.��дһ��ʹ��Ƕ��ѭ���ĳ���Ҫ���û�����һ��ֵ��ָ��Ҫ��ʾ�����С�Ȼ�󣬳�����ʾ��Ӧ�������Ǻţ���
//�е�һ�а���һ���Ǻţ��ڶ��а��������Ǻţ��������ơ�ÿһ�а������ַ��������û�ָ�������������ǺŲ�����
//����£����Ǻ�ǰ����Ͼ�㡣�ó��������������£�
//	Enter number of rows: 5
//	....*
//  ...**
//  ..***
//	.****
//  *****
//int main(void)
//{
//	using namespace std;
//
//	int rows = 0;	//���ڴ洢�û����������
//
//	cout << "Enter number of rows: ";
//	cin >> rows;
//
//	for (int i = 0; i < rows; ++i)
//	{
//		//��ʾ���
//		for (int period = rows - i - 1; period > 0; --period)
//		{
//			cout << ".";
//		}
//
//		//��ʾ�Ǻ�
//		for (int asterisk = 0; asterisk < i+1; ++asterisk)
//		{
//			cout << "*";
//		}
//
//		cout << endl;	//һ��������Ϻ���
//	}
//
//	return 0;
//}


//9.��дһ������ǰһ����ϰ�������ĳ��򣬵�ʹ��string����������ַ����顣���ڳ����а���ͷ�ļ�string����ʹ
//�ù�ϵ����������бȽϲ��ԡ�
//int main(void)
//{
//	using namespace std;
//
//	int count = 0;
//	string word;
//
//	cout << "Enter words (to stop, type the word done):\n";
//	cin >> word;
//
//	while (word != "done")
//	{
//		count++;
//		cin >> word;
//	}
//
//	cout << "You entered a total of " << count << " words.\n";
//
//	return 0;
//}

//C������ɱ����ϰ8
//int main(void)
//{
//	int count = 0;
//	char word[20];
//
//	printf("Enter words (to stop, type the word done):\n");
//	scanf("%s", word);
//
//	while (strcmp(word, "done"))
//	{
//		count++;
//		scanf("%s", word);
//	}
//
//	printf("You entered a total of %d words.\n", count);
//
//	return 0;
//}

//8.��дһ��������ʹ��һ��char�����ѭ����ÿ�ζ�ȡһ�����ʣ�ֱ���û�����doneΪֹ����󣬸ó���ָ���û�
//�����˶��ٸ�����(������done����)�������Ǹó�������������
//	Enter words (to stop, type the word done):
//	anteater birthday category dumpster
//	envy finagle geometry done for sure
//	You entered a total of 7 words.
//int main(void)
//{
//	using namespace std;
//
//	int count = 0;
//	char word[20];
//
//	cout << "Enter words (to stop, type the word done):\n";
//	cin >> word;
//
//	while (strcmp(word, "done"))
//	{
//		count++;
//		cin >> word;
//	}
//
//	cout << "You entered a total of " << count << " words.\n";
//
//	return 0;
//}

//7.���һ����Ϊcar�Ľṹ�������洢�����й���������Ϣ�������̣��洢���ַ������string�����е��ַ�������
//������ݣ�����������дһ���������û�ѯ���ж�������������󣬳���ʹ��new������һ������Ӧ������car�ṹ
//��ɵĶ�̬���顣��������������ʾ�û�����ÿ�����������̣������ɶ��������ɣ��������Ϣ����ע�⣬����Ҫ
//�ر�С�ģ���Ϊ���������ȡ��ֵ���ַ�������󣬳�����ʾÿ���ṹ�����ݡ��ó�������������£�
//	How many cars do you wish to catalog? 2
//	Car #1:
//	Please enter the make: Hudson Hornet
//	Please enter the year made: 1952
//	Car #2:
//	Please enter the make: Kaiser
//	Please enter the year made: 1951
//	Here is collection:
//	1952 Hudson Hornet
//  1951 Kaiser

//using namespace std;
//
//struct Car
//{
//	string manufacturer;
//	int production_year;
//};
//
//int main(void)
//{
//	int input;
//
//	cout << "How many cars do you wish to catalog? ";
//	cin >> input;
//	cin.get();	//�����ж�ȡ����ֹӰ���´�����
//
//	Car* car = new Car[input];	//������Ӧ�Ľṹ������
//
//	//�����ݴ���ṹ��������
//	for (int i = 0; i < input; i++)
//	{
//		cout << "Car #" << i + 1 << endl;
//		cout << "Please enter the make: ";
//		getline(cin, car[i].manufacturer);
//		cout << "Please enter the year made: ";
//		cin >> car[i].production_year;
//		cin.get(); //�����ж�ȡ����ֹӰ����һ������
//	}
//
//	cout << "Here is Collection:\n";
//	//��ʾ�ṹ�������е�����
//	for (int i = 0; i < input; i++)
//	{
//		cout << car[i].production_year << " " << car[i].manufacturer << endl;
//	}
//
//	delete[]car;	//�ͷſ��ٵ�����ռ�
//
//	return 0;
//}

//6.��ɱ����ϰ5������һ��ʹ��һ����ά�������洢����----3����ÿ���µ������������򽫱���ÿ���������Լ�����
//������������
//const int Years_month = 12;
//
//int main(void)
//{
//	using namespace std;
//
//	int quantity[3][12];
//	int sum = 0;
//	int total_sum = 0;
//
//	string month[Years_month] =
//	{
//		"January",
//		"February",
//		"March",
//		"April",
//		"May",
//		"June",
//		"July",
//		"August",
//		"September",
//		"October",
//		"November",
//		"December"
//	};
//
//	cout << "������3����ÿ���µ�������" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "��" << i + 1 << "��" << endl;
//		for (int j = 0; j < 12; j++)
//		{
//			cout << month[j] << ":";
//			cin >> quantity[i][j];
//			sum += quantity[i][j];
//		}
//		total_sum += sum;
//
//		cout << "\t\t\t\t\t������������" << sum << endl;
//	}
//
//	/*for (int i = 0; i < 3; i++)
//	{
//		cout << "��" << i + 1 << "��" << endl;
//		for (int j = 0; j < 12; j++)
//		{
//			cout << month[j] << ":";
//			cout << quantity[i][j];
//			cout << "\t";
//		}*/
//	cout << endl << "\t\t\t\t\t��������������: " << total_sum << endl;
//	/*cout << endl;*/
//	/*}*/
//
//	return 0;
//}