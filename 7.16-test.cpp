#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <cstring>

//William Wingate�����������������񡣶���ÿ����������������Ҫ��¼������Ϣ��
//*��������˾�����ƣ������ж���������
//*��������ֱ��
//������������
//�����һ���ܴ洢��Щ��Ϣ�Ľṹ������дһ��ʹ�����ֽṹ�����ĳ��򡣳��������û�����������Ϣ��Ȼ����ʾ
//��Щ��Ϣ����ʹ��cin�������ķ�������cout��
//struct Pizza
//{
//	char company[20];
//	int diamater;
//	double weight;
//};
//
//int main(void)
//{
//	using namespace std;
//
//	Pizza info;
//
//	cout << "Enter Pizza company: " << endl;
//	cin.getline(info.company, 20);
//	cout << "Enter Pizza diamater: " << endl;
//	cin >> info.diamater;
//	cout << "Enter Pizza weight: " << endl;
//	cin >> info.weight;
//	cout << endl;
//
//	cout << "Pizza information" << endl;
//	cout << "Company: " << info.company << endl;
//	cout << "Diamater: " << info.diamater << endl;
//	cout << "Weight: " << info.weight << endl;
//
//	return 0;
//
//}

//�ṹCandyBar����3����Ա��������ϰ5��ʾ�����дһ�����򣬴���һ������3��Ԫ�ص�CandyBar���飬�������ǳ�
//ʼ��Ϊ��ѡ���ֵ��Ȼ����ʾÿ���ṹ�����ݡ�
//struct CandyBar
//{
//	char brand[20];
//	double weight;
//	int calories;
//};
//
//int main(void)
//{
//	using namespace std;
//
//	CandyBar snack[3] = 
//	{ 
//		{"������", 2.3, 350},
//		{"�޻���", 0.5, 200},
//		{"����", 3.14, 520}
//	};
//
//	cout << "��һ��" << endl;
//	cout << "�ǵ�Ʒ�ƣ�" << snack[0].brand << endl;
//	cout << "�ǵ�������" << snack[0].weight << endl;
//	cout << "�ǵĿ�·�" << snack[0].calories << endl << endl;
//
//	cout << "�ڶ���" << endl;
//	cout << "�ǵ�Ʒ�ƣ�" << snack[1].brand << endl;
//	cout << "�ǵ�������" << snack[1].weight << endl;
//	cout << "�ǵĿ�·�" << snack[1].calories << endl << endl;
//
//	cout << "������" << endl;
//	cout << "�ǵ�Ʒ�ƣ�" << snack[2].brand << endl;
//	cout << "�ǵ�������" << snack[2].weight << endl;
//	cout << "�ǵĿ�·�" << snack[2].calories << endl << endl;
//
//	return 0;
//}

//�ṹCandyBar����3����Ա����һ����Ա�洢���ǿ��Ʒ�ƣ��ڶ�����Ա�洢�ǿ������(������С��);��������Ա��
//�����ǿ�Ŀ�·�ﺬ��(����)�����дһ��������������ṹ������һ����Ϊsnack��CandyBar�������������Ա��
//���ʼ��Ϊ"Mocha Munch", 2.3��350.��ʼ��Ӧ������snackʱ���С���󣬳�����ʾsnack�������ڴ�
//struct CandyBar
//{
//	char brand[20];	//Ʒ��
//	double weight;	//����
//	int calories;	//��·��
//};
//
//int main(void)
//{
//	using namespace std;
//
//	CandyBar snack = {"������", 2.3, 350};
//
//	cout << "�ǿ��Ʒ�ƣ�" << snack.brand << endl;
//	cout << "�ǿ��������" << snack.weight << endl;
//	cout << "�ǿ�Ŀ�·� " << snack.calories << endl;
//
//	return 0;
//}

//��дһ��������Ҫ���û���������������Ȼ���������գ�Ȼ�����ʹ��һ�����źͿո��պ���������������洢
//����ʾ��Ͻ������ʹ��string�����ͷ�ļ�string�еĺ����������Ǹó�������ʱ�����Σ�
//		Enter your first name: Filp
//		Enter your last name: Fleming
//		Here's the information in a single sting: Fleming, Filp
//int main(void)
//{
//	using namespace std;
//
//	string str_first_name;
//	string str_last_name;
//	string str_tmp;	//��ʱ���������ڴ洢��ϵ��ַ���
//
//	cout << "Enter your first name: ";
//	getline(cin, str_first_name);
//	cout << "Enter your last name: ";
//	getline(cin, str_last_name);
//
//	str_tmp = str_first_name;
//	str_tmp += ", ";
//	str_tmp += str_last_name;
//
//	cout << "Here's the information in a single string: " << str_tmp;
//
//	return 0;
//}


//��дһ��������Ҫ���û���������������Ȼ���������գ�Ȼ�����ʹ��һ�����źͿո��պ���������������洢
//����ʾ��Ͻ������ʹ��char�����ͷ�ļ�cstring�еĺ����������Ǹó�������ʱ�����Σ�
//		Enter your first name: Filp
//		Enter your last name: Fleming
//		Here's the information in a single sting: Fleming, Filp
//int main(void)
//{
//	using namespace std;
//
//	const int ArSize = 20;
//	char first_name[ArSize];
//	char last_name[ArSize];
//	char tmp[ArSize];
//
//	cout << "Enter your first name: ";
//	cin.getline(first_name, ArSize);
//	cout << "Enter your last name: ";
//	cin.getline(last_name, ArSize);
//	strcpy(tmp, last_name);
//	strcat(tmp, ", ");
//	strcat(tmp, first_name);
//	cout << "Here's the information in a single string: " << tmp;
//
//	return 0;
//}

//2.�޸ĳ����嵥4.4��ʹ��C++ string�������char����
//int main(void)
//{
//	using namespace std;
//
//	string str1, str2;
//
//	cout << "Enter your name: " << endl;
//	/*getline(cin, str1);*/
//	getline(cin, str1);
//	cout << "Enter your favorite dessert: " << endl;
//	getline(cin, str2);
//
//	cout << "I have some delicious " << str2 << " for you, " << str1;
//
//	return 0;
//}

//1.��дһ��C++�������������ʾ����ʾ������������ʾ��Ϣ
//What is your first name? Betty Sue
//What is your last name? Yewe
//What letter grade do you deserve? B
//What is your age? 22
//Name: Yewe, Betty Sue
//Grade: C
//Age: 22
//int main(void)
//{
//	using namespace std;
//
//	const int ArSize = 20;
//	char first_name[ArSize];
//	char last_name[ArSize];
//	char grade;
//	int age;
//
//	cout << "What is your first name? ";
//	cin.getline(first_name, ArSize);
//
//	cout << "What is your last name? ";
//	cin.getline(last_name, ArSize);
//
//	cout << "What letter grade do you deserve? ";
//	cin >> grade;
//
//	cout << "What is your age? ";
//	cin >> age;
//
//	cout << "Name: " << last_name << ", " << first_name << endl;
//	cout << "Grade: " << (char)(grade + 1) << endl;
//	cout << "Age: " << age;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	//C, ԭ��C++
//	double a1[4] = {1.2, 2.4, 3.6, 4.8};
//	//C++98 STL
//	vector<double> a2(4);	//���������ĸ�Ԫ�ص�vector����
//
//	//�� C98 ��û�м򵥵ĳ�ʼ������
//	a2[0] = 1.0 / 3.0;
//	a2[1] = 1.0 / 5.0;
//	a2[2] = 1.0 / 7.0;
//	a2[3] = 1.0 / 9.0;
//
//	//C11 - ��������ʼ���������
//	array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
//	array<double, 4> a4;
//	a4 = a3;  //����ͬ��С�����������Ч
//
//	//ʹ�������ʾ��
//	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
//	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
//	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
//	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
//
//	//������Ϊ
//	//a1[-2] = 20.2;
//	//cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
//	a2.at(-2) = 20.2;
//	cout << "a2[-2] = " << a2[-2] << " at " << &a2[-2] << endl;
//	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
//	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
//
//
//	return 0;
//}