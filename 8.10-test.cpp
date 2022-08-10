#include <iostream>
#include <string>

//ʹ��string�࣬����ʾ��ͬ����Ʒ���������һЩ�����ġ�������ӵĻ���˼���ǣ�����һ������������ָ�����ַ�
//�����뵽��һ���ַ�����ǰ��ͺ��档�����ṩ���������ĺ���������һ�����ڷǳ����ȱ�ݣ����ܵ��³����������
//����ͨ�����롣
//using namespace std;
//
//string version1(const string& s1, const string& s2);
//const string& version2(string& s1, const string& s2);
//const string& version3(string& s1, const string& s2);
//
//int main(void)
//{
//	string input;
//	string copy;
//	string result;
//
//	cout << "Enter a string: ";
//	getline(cin, input);
//	copy = input;
//
//	cout << "Your string as enter: " << input << endl;
//	result  = version1(input, "***");
//	cout << "Your string enhanced: " << result << endl;
//	cout << "Your original string: " << input << endl;
//
//	cout << "---------------------------------------------\n";
//
//	result = version2(input, "###");
//	cout << "Your string enhanced: " << result << endl;
//	cout << "Your original string: " << input << endl;
//
//	cout << "---------------------------------------------\n";
//
//	cout << "Reseting original string.\n";
//	input = copy;
//	result = version3(input, "@@@");
//	cout << "Your string enhanced: " << result << endl;
//	cout << "Your original string: " << input << endl;
//
//	return 0;
//}
//
//string version1(const string& s1, const string& s2)
//{
//	string temp;
//
//	temp = s2 + s1 + s2;
//	return temp;
//}
//
//const string& version2(string& s1, const string& s2)
//{
//	s1 = s2 + s1 + s2;
//	return s1;
//}
//
//const string& version3(string& s1, const string& s2)
//{
//	string temp;
//
//	temp = s2 + s1 + s2;
//	return temp;	//unsafe to return reference to local variable
//}

//���������ڽṹ
//using namespace std;
//
//struct free_throws
//{
//	string name;
//	int made;
//	int attempts;
//	float percent;
//};
//
//void set_pc(free_throws& ft);
//void display(free_throws& ft);
//free_throws& accumulate(free_throws& target, const free_throws& source);
//
//int main(void)
//{
//	free_throws one = { "Ifelsa Branch", 13, 14 };
//	free_throws two = { "Andor Knott", 10, 16 };
//	free_throws three = { "Minnie Max", 7, 9 };
//	free_throws four = { "Ifelsa Branch", 5, 9 };
//	free_throws five = { "Whily Looper", 6, 14 };
//	free_throws team = { "Throwgoods", 0, 0 };
//	free_throws dup;
//
//	set_pc(one);
//	display(one);
//	accumulate(team, one);
//	display(team);
//	//using return value in argument
//	display(accumulate(team, two));
//	accumulate(accumulate(team, three), four);
//	display(team);
//	//display(accumulate(accumulate(team, three), four)); �ȼ�����������������
//
//	//using return value in assignment
//	dup = accumulate(team, five);
//	cout << "Display team:\n";
//	display(team);
//	cout << "Display dup after assignment:\n";
//	display(dup);
//	set_pc(four);
//
//	//ill-advised assignment
//	accumulate(dup, five) = four;
//	cout << "Display dup after ill-adcised:\n";
//	display(dup);
//
//	return 0;
//}
//
//void set_pc(free_throws& ft)
//{
//	if (ft.attempts != 0)
//		ft.percent = 100.0 * float(ft.made) / float(ft.attempts);
//	else
//		ft.percent = 0;
//}
//
//void display(free_throws& ft)
//{
//	cout << "Name: " << ft.name << endl;
//	cout << " Made: " << ft.made << "\t";
//	cout << "Attempts: " << ft.attempts << "\t";
//	cout << "Percent: " << ft.percent << endl;
//}
//
//free_throws &accumulate(free_throws& target, const free_throws& source)
//{
//	target.attempts += source.attempts;
//	target.made += source.made;
//	set_pc(target);
//	return target;
//}

//ʹ�������������������������������һ����������double���͵Ĳ�������һ������double���á�
//using namespace std;
//
//double cube(double a);
//double recube(double& ra);
//
//int main(void)
//{
//	double x = 3.0;
//
//	cout << cube(x) << " = cube of " << x << endl;
//	cout << recube(x) << " = cube of " << x << endl;
//
//	return 0;
//}
//
//double cube(double a)
//{
//	a *= a * a;
//
//	return a;
//}
//
//double recube(double& ra)
//{
//	ra *= ra * ra;
//
//	return ra;
//}

//��������������ֵ - ����ʹ�����ִ��η�ʽ
//using namespace std;
//
//void swapr(int& a, int& b);
//void swapp(int* pa, int* pb);
//void swapv(int a, int b);
//
//int main(void)
//{
//	int wallet1 = 300;
//	int wallet2 = 350;
//
//	cout << "wallet1 = " << wallet1 << endl;
//	cout << "wallet = " << wallet2 << endl;
//
//	cout << "Using references to swap contents:\n";
//	swapr(wallet1, wallet2);
//	cout << "wallet1 = " << wallet1 << endl;
//	cout << "wallet = " << wallet2 << endl;
//
//	cout << "Using pointer to swap contents again:\n";
//	swapp(&wallet1, &wallet2);
//	cout << "wallet1 = " << wallet1 << endl;
//	cout << "wallet = " << wallet2 << endl;
//
//	cout << "Trying to use passing by value:\n";
//	swapv(wallet1, wallet2);
//	cout << "wallet1 = " << wallet1 << endl;
//	cout << "wallet = " << wallet2 << endl;
//
//	return 0;
//}
//
//void swapr(int& a, int& b)
//{
//	int temp;
//
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapp(int* pa, int* pb)
//{
//	int temp;
//
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//void swapv(int a, int b)
//{
//	int temp;
//
//	temp = a;
//	a = b;
//	b = temp;
//}

//���ñ��� - &
//using namespace std;
//
//int main(void)
//{
//	int rats = 101;
//	int& rodents = rats;
//
//	cout << "rats = " << rats;
//	cout << ", rodents = " << rodents << endl;
//
//	cout << "rats address = " << &rats;
//	cout << ", rodents address = " << &rodents << endl;
//
//	int bunnies = 50;
//	rodents = bunnies;
//	cout << "bunnies = " << bunnies;
//	cout << ", rats = " << rats;
//	cout << ", rodents = " << rodents << endl;
//
//	cout << "bunnies address = " << &bunnies;
//	cout << ", rodents address = " << &rodents;
//
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	int& b = a;
//
//	std::cout << "a address: " << &a << "a value = " << a << std::endl;
//	std::cout << "b address: " << &b << "b value = " << b << std::endl;
// 
//	return 0;
//}