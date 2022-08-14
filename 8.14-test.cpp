#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

//7.�޸ĳ����嵥8.14��ʹ��ʹ��������ΪSumArray()��ģ�庯������������Ԫ�ص��ܺͣ���������ʾ��������ݡ�����
//Ӧ��ʾthing���ܺ��Լ�����debt���ܺ�
using namespace std;

template <typename T>
T SumArray(T arr[], int n);

template <typename T>
T SumArray(T* arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main(void)
{
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] =
	{
		{"Rock", 2400.0},
		{"Jack", 1300.0},
		{"Rose", 1800.0}
	};
	double* pd[3];

	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	cout << "things total:";
	int value1 = SumArray(things, 6);
	cout << value1 << endl;
	cout << "Mr.E's debts total:";
	double value2 = SumArray(pd, 3);
	cout << value2 << endl;

	return 0;
}
//��ȫƥ��
template <typename T>
T SumArray(T arr[], int n)
{
	T sum = 0;

	for (int i = 0; i < n; i++)
		sum += arr[i];
	return sum;
}
//���ƥ��
template <typename T>
T SumArray(T* arr[], int n)
{
	T sum = 0;

	for (int i = 0; i < n; i++)
		sum += *arr[i];
	return sum;
}

//6.��д����ģ��maxn()��������һ��T����Ԫ����ɵ������һ����ʾ����Ԫ����Ŀ��������Ϊ��������������������
//���Ԫ�ء��ڳ���������в��ԣ��ó���ʹ��һ������6��intԪ�ص������һ������4��doubleԪ�ص����������øú�
//�����ó��򻹰���һ�����廯������charָ������������е�ָ��������Ϊ����������������ַ����ĵ�ַ�������
//����������ַ������򷵻����е�һ���ַ����ĵ�ַ��ʹ����5���ַ���ָ����ɵ����������Ըþ��廯��
//using namespace std;
//
//template <typename T>
//T maxn(T arr[], int n);
//
//template<> const char* maxn(const char* arr[], int n);
//
//int main(void)
//{
//	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
//	double arr2[4] = { 3.14, 6.14, 9.14, 12.14 };
//	/*const char* parr[5] = { "hello", "world", "my", "lucky dog", "big boom" };*/
//	const char* parr[5] = { "hello", "world", "myqqq", "lucky", "bigbo" };
//
//	int value1 = maxn(arr1, 6);
//	cout << "arr1 max value = " << value1 << endl;
//
//	double value2 = maxn(arr2, 4);
//	cout << "arr2 max value = " << value2 << endl;
//
//	const char* ptr = maxn(parr, 5);
//	cout << "parr max length = " << ptr << endl;
//
//	return 0;
//}
//
//template <typename T>
//T maxn(T arr[], int n)
//{
//	T max = arr[0];
//
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//
//	return max;
//}
//
//template<> const char* maxn(const char* arr[], int n)
//{
//	const char* temp = arr[0];
//
//	//������ַ����ĵ�ַ - ���
//	for (int i = 1; i < n; i++)
//	{
//		//����������Ϊ<=�����ַ������ȶ���ͬ�������᷵�����һ���ַ�����ַ,������Ϊ<,
//		//�����᷵�ص�һ���ַ����ĵ�ַ
//		if (strlen(temp) < strlen(arr[i])) 
//			temp = arr[i];
//	}
//
//	return temp;
//}

//5.��дģ�庯��max5()������һ������5��T����Ԫ�ص�������Ϊ����������������������Ԫ��(���ڳ��ȹ̶������
// ������ѭ����ʹ��Ӳ���룬������ͨ������������)����һ��������ʹ�øú�������T�滻Ϊһ������5��intֵ������
// ��һ������5��doubleֵ�����飬�Բ��Ըú���
//using namespace std;
//
//template <typename T>
//T max5(const T arr[]);
//
//int main(void)
//{
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	double arr2[5] = { 10.1, 2.3, 3.5, 4.8, 5.8 };
//
//	int value1 = max5(arr1);
//	cout << "arr1 max value = " << value1 << endl;
//
//	double value2 = max5(arr2);
//	cout << "arr2 max value = " << value2 << endl;
//
//	return 0;
//}
//
//template <typename T>
//T max5(const T arr[])
//{
//	T max = arr[0];	//�������һ��Ԫ����Ϊ���ֵ
//
//	for (int i = 1; i < 5; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//
//	return max;
//}

//4.���ṩ���������ĺ�����ԭ�ͣ��Ӷ���ɸó���ע�⣬Ӧ������show()������ÿ����ʹ��Ĭ�ϲ������뾡����ʹ��
//const������set()ʹ��new�����㹻�Ŀռ����洢ָ�����ַ���������ʹ�õļ�������ƺ�ʵ����ʱʹ�����ơ�(���ܻ�
//�����޸�ͷ�ļ������ƣ�ɾ��using����ָ���ȡ�������õı�����)
//using namespace std;
//#include <cstring>	//for strlen(),strcpy()
//
//struct stringy
//{
//	char* str;	//pointer to a string
//	int ct;	//length of string (not counting '\0')
//};
//
//char* set(stringy& be, const char te[]);
//void show(const stringy& be, int n = 1);
//void show(const char* ar, int n = 1);
//
////prototypes for set(), show(), and show() go here
//int main(void)
//{
//
//	stringy beany;
//	char testing[] = "Reality isn't what it used to be.";
//
//	char*p = set(beany, testing);	//first argument is a reference,
//							//allocates space to hold copy of testing,
//							//sets str nmber of beany to point to the
//							//new block, copies testing to new block,
//							//and sets ct member of beany
//	cout << "Beany first display:\n";
//	show(beany);	//prints member string once
//	cout << "Beany second display:\n";
//	show(beany, 2);  //prints member string twice
//	testing[0] = 'D';
//	testing[1] = 'u';
//	cout << "Testing first display:\n";
//	show(testing);	//prints testing string once
//	cout << "Testing seconde display:\n";
//	show(testing, 3);	//prints testing string thrice
//	show("Done!");
//
//	return 0;
//}
//
//char* set(stringy& be,const char te[])
//{
//	char* pte = new char;
//	be.str = pte;	
//	strcpy(pte, te);
//	be.ct = strlen(te);
//
//	return pte;
//}
//
//void show(const stringy& be, int n)
//{
//	for (int i = 0; i < n; i++)
//		cout << "beany str: " << be.str << ", " << be.ct << endl;
//}
//
//void show(const char* ar, int n)
//{
//	for (int i = 0; i < n; i++)
//		cout << ar << endl;
//}