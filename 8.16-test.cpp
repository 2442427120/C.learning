#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>

//�ڰ��±����ϰ��6���޸�
using namespace std;

template <typename T>
T maxn(T arr[], int n);

template<>
string maxn(string arr[], int n);

int main(void)
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	double arr2[4] = { 3.14, 6.14, 9.14, 12.14 };
	/*const char* parr[5] = { "hello", "world", "my", "lucky dog", "big boom" };*/
	/*const char* parr[5] = { "hello", "world", "myqqq", "lucky", "bigbo" };*/
	/*string parr[5] = { "hello", "world", "my", "lucky dog", "big boom" };*/
	string parr[5] = { "hello", "world", "myqqq", "lucky", "bigbo" };


	cout << "The max value of int arr: " << maxn(arr1, 6) << endl;
	cout << "The max value of double arr: " << maxn(arr2, 4) << endl;
	cout << "The max value of string: " << maxn(parr, 5) << endl;
	/*int value1 = maxn(arr1, 6);
	cout << "arr1 max value = " << value1 << endl;

	double value2 = maxn(arr2, 4);
	cout << "arr2 max value = " << value2 << endl;

	string ptr = maxn(parr, 5);
	cout << "parr max length = " << ptr << endl;*/

	return 0;
}

template <typename T>
T maxn(T arr[], int n)
{
	T max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}

template<> 
string maxn(string arr[], int n)
{
	//����3.ʹ��string�࣬����ʱ�����洢�����һ���±�
	int pos = 0;

	for (int i = 1; i < n; i++)
	{
		if (arr[pos].size() < arr[i].size())
			pos = i;
	}

	return arr[pos];

	//����2.ʹ��string�࣬����ʱ�����洢�����ַ�������ĵ�һ����Ա
	/*string temp = arr[0];

	for (int i = 1; i < 5; i++)
	{
		if (temp.size() < arr[i].size())
			temp = arr[i];
	}

	return temp;*/

	//����1��ʹ��char*, ����ʱ�����洢�����ַ�������ĵ�һ����Ա
	//const char* temp = arr[0];

	//for (int i = 1; i < n; i++)
	//{
	//	//������ַ����ĵ�ַ - ���
	//	//����������Ϊ<=�����ַ������ȶ���ͬ�������᷵�����һ���ַ�����ַ,������Ϊ<,
	//	//�����᷵�ص�һ���ַ����ĵ�ַ
	//	if (strlen(temp) < strlen(arr[i])) 
	//		temp = arr[i];
	//}
	//return temp;
}

//�ڰ��±����ϰ��5���޸�
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
//	//����1.ֱ����ʾ����ֵ
//	cout << "The max value of int arr: " << max5(arr1) << endl;
//	cout << "The max value of double arr: " << max5(arr2) << endl;
//
//	//����2.������ʱ�����洢����ֵ
//	/*int value1 = max5(arr1);
//	cout << "arr1 max value = " << value1 << endl;
//
//	double value2 = max5(arr2);
//	cout << "arr2 max value = " << value2 << endl;*/
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

//�ڰ��±����ϰ��4���޸�
//using namespace std;
//#include <cstring>	//for strlen(),strcpy()
//
//struct stringy
//{
//	char* str;	//pointer to a string
//	int ct;	//length of string (not counting '\0')
//};
//
//void set(stringy& be, const char te[]);
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
//	set(beany, testing);	//first argument is a reference,
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
//void set(stringy& be,const char te[])
//{
//	be.ct = strlen(te) + 1;
//	be.str = new char[be.ct];
//	strcpy(be.str, te);
//
//	/*char* pte = new char;
//	be.str = pte;	
//	strcpy(pte, te);
//	be.ct = strlen(te);*/
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

//�ڰ��±����ϰ��3���޸�
//using namespace std;
//
//void low_to_up(string& u);
//
//int main(void)
//{
//	string user;
//
//	cout << "Enter a string (q to quit): ";
//	while (getline(cin, user) && user != "q")
//	{
//		low_to_up(user);
//		cout << user << endl;
//		cout << "Next string(q to quit): ";
//	}
//	cout << "Bye.\n";
//
//	return 0;
//
//}
//
//void low_to_up(string& str)
//{
//	//����1
//	for (int i = 0; i < str.size(); i++)	//str.zize()���������ַ����ĳ���
//		str[i] = toupper(str[i]);
//
//	//����2
//	//int i = 0;
//	//while (isalpha(u[i]) || u[i] == ' ' || isspace(u[i])) //������Ϊ�ַ����ո�������ʱ����ѭ��
//	//{
//	//	if (islower(u[i]))	//����ַ���Сд�ַ�����֮ת��Ϊ��д�ַ�
//	//		u[i] = toupper(u[i]);
//	//	else
//	//		i++;
//	//}
//}

//�ڰ��±����ϰ��2���޸�
//using namespace std;
//
//struct CandyBar
//{
//	char* name;
//	double weight;
//	int calories;
//};
//
//void set(CandyBar& candybar, const char* str = "Millennium munch", const double w = 2.85, const int c = 350);
//void show(const CandyBar& bar);
//
//int main(void)
//{
//	CandyBar B;
//
//	set(B);	//��Ĭ��ֵ��ʽ���
//	cout << "Display with default parameters:\n";
//	show(B);
//
//	set(B, "Microsoft VS", 3.78, 600); //������ֵ���
//	cout << "custom parameters:\n";
//	show(B);
//
//	return 0;
//}
//
//void set(CandyBar& candybar, const char* str, const double w, const int c)
//{
//	strcpy(candybar.name, str);
//	//candybar.name = str;
//	candybar.weight = w;
//	candybar.calories = c;
//}
//
//void show(const CandyBar& bar)
//{
//	cout << bar.name << endl;
//	cout << bar.weight << endl;
//	cout << bar.calories << endl;
//}

//�ڰ��±����ϰ��һ���޸�
//using namespace std;
//
//void display(const char* pt, int n = 0);
//
////int temp = 0;	//����tempΪȫ�ֱ������Լ����ӡ�����ĵ��ô���
//
//int main(void)
//{
//	const char* ps = "hello";
//	const char* ptr = "good morning";
//
//	display(ps);
//	cout << "-------------------------\n";
//	display(ptr);
//	cout << "-------------------------\n";
//	display(ps, 3);
//	cout << "-------------------------\n";
//	display(ps, 6);
//	cout << "-------------------------\n";
//	display(ps, 9);
//
//	return 0;
//}
//
//void display(const char* pt, int n)
//{
//	static int temp = 0;	//����һ����̬���������㺯�����õĴ���
//	temp++;
//
//	if (n == 0)
//		cout << pt << endl;
//	else
//	{
//		for (int i = 0; i < temp; i++)
//			cout << pt << endl;
//	}
//}