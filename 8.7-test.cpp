#include <iostream>
#include <cctype>
#include <array>
#include <string>

//9.�����ϰ������д��������ͽṹ�ĺ����������ǳ���Ŀ�ܣ����ṩ���������ĺ���������ɸó���
using namespace std;

const int SLEN = 30;

struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

//getinfo() has two arguments: a pointer to the first element of an array of elements of student
//structures and an int representing the number of elements of the array.The function solicits
// and stores data about students.It terminates input upon filling the array or upon encountering
// a blank line for the student name.The function return the actual number of array elements
// filled.
int getinfo(student pa[], int n);

//display1() take a student structure as an argument and displays its contents
void display1(student st);

//display2() takes the address of student structure as anargumet and displays the structure's
//contents
void display2(const student* ps);

//display3() takes the address of the first element of an array of student structures and the 
//number of array  elemnets as arguments and displays the contents of the structures
void display3(const student pa[], int n);

int main(void)
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	/*cout << entered << endl;*/
	
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}

	display3(ptr_stu, entered);

	delete[]ptr_stu;
	cout << "Done.\n";

	return 0;
}

int getinfo(student pa[], int n)
{
	int i = 0;

	while (n--)
	{
		cout << "Student #" << i + 1 << endl;
		cout << "fullname: ";
		cin.getline(pa[i].fullname, SLEN);
		cout << "hobby: ";
		cin.getline(pa[i].hobby, SLEN);
		cout << "ooplevel: ";
		cin >> pa[i].ooplevel;
		
		if (!cin)
			break;
		
		cin.get();
		i++;
	}

	return i;
}

void display1(student st)
{
	cout << "\nfullname1:" << st.fullname << endl;
	cout << "hobby1:" << st.hobby << endl;
	cout << "ooplevel1:" << st.ooplevel << endl;
}

void display2(const student* ps)
{
	cout << "\nfullname2:" << ps->fullname << endl;
	cout << "hobby2:" << ps->hobby << endl;
	cout << "ooplevel2:" << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nfullname3#" << i + 1 << ":" << pa[i].fullname << endl;
		cout << "hobby3#" << i + 1 << ":" <<  pa[i].hobby << endl;
		cout << "ooplevel3#" << i + 1 << ":" << pa[i].ooplevel << endl;
	}
}

//8.�ڲ�ʹ��array����������ɳ����嵥7.15�����Ĺ�������д���������İ汾��
//a. ʹ��const char*����洢��ʾ�������Ƶ��ַ�������ʹ��double����洢��֧
//using namespace std;
//
//const int Size = 4;
//const char* Sname[Size] = {"Spring", "Summer", "Fall", "Winter"};
//
//void fill(double* ar);
//void show(double* ar);
//
//int main(void)
//{
//	double expense[Size];
//	fill(expense);
//	show(expense);
//
//	return 0;
//}
//
//void fill(double* ar)
//{
//	for (int i = 0; i < Size; i++)
//	{
//		cout << "Enter " << Sname[i] << " expense:";
//		cin >> ar[i];
//	}
//}
//
//void show(double* ar)
//{
//	double total = 0.0;
//	cout << "\nEXPENSE\n";
//	for (int i = 0; i < Size; i++)
//	{
//		cout << Sname[i] << ": $" << ar[i] << endl;
//		total += ar[i];
//	}
//
//	cout << "Total Expense: $" << total << endl;
//}

//b. ʹ��const char*����洢�洢��ʾ�������Ƶ��ַ�������ʹ��һ���ṹ���ýṹֻ��һ����Ա����һ�����ڴ洢
//��֧��double���顣���������ʹ��array��Ļ����������
//using namespace std;
//
//const int Size = 4;
//const char* Sname[Size] = {"Spring", "Summer", "Fall", "Winter"};
//
//struct income
//{
//	double expense[Size];
//};
//
//void fill(income* e);
//void show(const income* e);
//
//int main(void)
//{
//	income e;
//
//	fill(&e);
//	show(&e);
//
//	return 0;
//}
//
//void fill(income* e)
//{
//	for (int i = 0; i < Size; i++)
//	{
//		cout << "Enter " << Sname[i] << " expense: ";
//		cin >> e->expense[i];
//	}
//}
//
//void show(const income* e)
//{
//	double total = 0.0;
//
//	cout << "\nEXPENSE\n";
//	for (int i = 0; i < Size; i++)
//	{
//		cout << Sname[i] << ": $" << e->expense[i] << endl;
//		total += e->expense[i];
//	}
//}

//7.�޸ĳ����嵥7.7�е�3�����鴦������ʹ֮ʹ������ָ���������ʾ���䡣fill_array()����������ʵ�ʶ�ȡ��
//���ٸ����֣����Ƿ���һ��ָ�룬��ָ��ָ���������λ�ã������ĺ������Խ���ָ����Ϊ�ڶ����������Ա�ʶ
//���ݽ�β��
//using namespace std;
//
//const int Max = 5;
//
//double* fill_array(double* begin, double* end);
//void show_array(double* begin, double* p);
//void revalue(double r, double* begin, double* p);
//
//int main(void)
//{
//	double properties[Max];
//
//	double* pos = fill_array(properties, properties + Max);
//	show_array(properties, pos);
//
//	if (pos)
//	{
//		cout << "Enter revalution factor: ";
//		double factor;
//
//		while (!(cin >> factor))
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Bad input; input process terminated.\n";
//		}
//
//		revalue(factor, properties, pos);
//		show_array(properties, pos);
//	}
//
//	cout << "Done.\n";
//	cin.get();
//	cin.get();
//
//	return 0;
//}
//
//double* fill_array(double *begin, double *end)
//{
//	double temp;
//	int i;
//	double* pt;
//
//	for (i = 0, pt = begin; pt != end; pt++, i++)
//	{
//		cout << "Enter value #" << i + 1 << ": ";
//		cin >> temp;
//		cin.get();
//
//		if (!cin)
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Bad input; input process terminated.\n";
//			break;
//		}
//		else if (temp < 0)
//			break;
//		else
//			*pt = temp;  
//	}
//
//	return pt;
//}
//
//void show_array(double* begin, double* p)
//{
//	double* pt;
//	int i;
//
//	for (i = 0, pt = begin; pt != p; i++, pt++)
//	{
//		cout << "Propertoes #" << i + 1 << ": $";
//		cout << *pt << endl;
//	}
//}
//
//void revalue(double r, double *begin, double* p)
//{
//	double* pt;
//	int i;
//
//	for (i = 0, pt = begin; pt != p; i++, pt++)
//		(*pt) *= r;
//}

//6.��дһ��������ʹ�����к�����
//Fill_array()��һ��double��������ƺͳ�����Ϊ����������ʾ�û�����doubleֵ��������Щֵ�洢�������С�����
//�鱻�������û����������ʱ�����뽫ֹͣ��������ʵ�������˶��ٸ����֡�
//Show_array()��һ��double��������ƺͳ�����Ϊ����������ʾ����������ݡ�
//����ʹ����Щ������������飬Ȼ����ʾ���飻��ת���飬Ȼ����ʾ���飻��ת�����г���һ�������һ��Ԫ��֮��
//������Ԫ�أ�Ȼ����ʾ���顣
//using namespace std;
//
//const int Size = 10;
//
//int Fill_array(array<double, Size>* ar, int n);
//void Show_array(const array<double, Size> ar, int n);
//void reverse_array(array<double, Size>* ar, int n);
//
//int main(void)
//{
//	int count;
//	array<double, Size> arr;
//
//	count = Fill_array(&arr, Size);
//	cout << count << " number were actually entered.\n";
//	cout << "array content:\n";
//	Show_array(arr, count);
//	reverse_array(&arr, count);
//	cout << "After reserve array:\n";
//	Show_array(arr, count);
//
//	return 0;
//}
//
//int Fill_array(array<double, Size> *ar , int n)
//{
//	int i = 0;
//	cout << "Please enter up to ten whole numbers:\n";
//
//	while (n > 0 && cin >> (*ar)[i])
//	{
//		i++;
//		n--;
//	}
//
//	return i;
//}
//
//void Show_array(const array<double, Size> ar, int n)
//{
//	for (int i = 0; i < n; i++)
//		cout << ar[i] << " ";
//	cout << endl;
//}
////�����鷴ת - ����һ�������һ�������������ȫ����ת
//void reverse_array(array<double, Size>* ar, int n)
//{
//	double tmp;
//	int i, min, max; //��ѭ���ⶨ��i����ֹ����δ���õľֲ�����
//	for (i = 0, min = 1, max = n - 2; i < (n / 2 - 1); i++, min++,max--)
//	{
//		tmp = (*ar)[min];
//		(*ar)[min] = (*ar)[max];
//		(*ar)[max] = tmp;
//	}
//}

//5.����һ���ݹ麯��������һ�����������������ظò����Ľ׳ˡ�ǰ�潲����3�Ľ׳�д��3��������3*2!���������ƣ�
//��0!������Ϊ1.ͨ�õļ��㹫ʽ�����n��������n��=n*��n-1�������ڳ����жԸú������в��ԣ�����ʹ��ѭ����
//�û����벻ͬ��ֵ�����򽫱�����Щֵ�Ľ׳ˡ�
//using namespace std;
//
//long long factorial(int n);
//
//int main(void)
//{
//	int num;
//	long long value;
//
//	cout << "Please enter an integer: ";
//	while (cin >> num)
//	{
//		value = factorial(num);
//		cout << num << "! = " << value << endl;
//		cout << "Please enter an integer again (enter q to quit): ";
//	}
//
//	cout << "Done.\n";
//
//	return 0;
//}
//
//long long factorial(int n)
//{
//	if (0 == n)
//		return 1;
//	return n * factorial(n - 1);
//}

//4.����ݵĲ�Ʊ���л�����ʹ��������嵥7.4��ʾ�ļ򵥲�Ʊ�淨�ı��塣����Щ�淨�У���Ҵ�һ�鱻��Ϊ��
//����(field number)�ĺ�����ѡ�񼸸������磬���Դ������1-47��ѡ��5�����룻�����Դӵڶ�������(��1-27)ѡ
//��һ������(��Ϊ��ѡ����)��ҪӮ��ͷ����������ȷ�������еĺ��롣��ͷ���ļ�����ѡ�����������ļ�����ѡ
//����ѡ���뼸�ʵĳ˻������磬����������У���ͷ���ļ����Ǵ�47����������ȷѡȡ5������ļ������27������
//����ȷѡ��1������ļ��ʵĳ˻������޸ĳ����嵥7.4���Լ����е����ֲ�Ʊͷ���ļ��ʡ�
//using namespace std;
//
//long double probability(unsigned number, unsigned picks, unsigned head);
//
//int main(void)
//{
//	double total, choices, head;
//
//	cout << "Enter the total number of choices on the game card and the number of picks and head allowed:\n";
//	while ((cin >> total >> choices >> head) && choices <= total)
//	{
//		cout << "You have one chance in ";
//		cout << probability(total, choices, head);
//		cout << " of winning.\n";
//		cout << "Next two numbers (q to quit): ";
//	}
//
//	cout << "Bye.\n";
//
//	return 0;
//}
//
//long double probability(unsigned number, unsigned picks, unsigned head)
//{
//	long double result = 1.0;
//	long double n;
//	unsigned p;
//
//	for (n = number, p = picks; p > 0; n--, p--)
//		result = result * n / p;
//	return 1 / (result * head);
//}

//3.������һ���ṹ����:
//struct box
//{
//		char maker[40];
//		float height;
//		float width;
//		float length;
//		float voluem;
//};
//a. ��дһ����������ֵ����box�ṹ������ʾÿ����Ա��ֵ
//b. ��дһ������������box�ṹ�ĵ�ַ������voluem��Ա����Ϊ������ά���ȵĳ˻�
//c. ��дһ��ʹ�������������ļ򵥳���
//using namespace std;
//
//struct box
//{
//	char maker[40];
//	float height;
//	float width;
//	float length;
//	float voluem;
//};
//
//void show(box b);
//void use_box(box* b);
//
//int main(void)
//{
//	box b = { "cuboid", 30.0, 40.0, 50.0, 0.0 };
//	show(b);
//	use_box(&b);
//
//	return 0;
//}
//
//void show(box b)
//{
//	cout << b.maker << endl;
//	cout << b.height << endl;
//	cout << b.width << endl;
//	cout << b.length << endl;
//	cout << b.voluem << endl;
//}
//
//void use_box(box* b)
//{
//	b->voluem = b->height * b->width * b->length;
//	cout << b->voluem;
//}

//2.��дһ������Ҫ���û��������10���߶���ɼ��������ɼ��洢��һ�������С����������û������������,��
//��һ������ʾ���гɼ���Ȼ�󱨸�ƽ���ɼ�����ʹ��3�����鴦�������ֱ�������룬��ʾ�ͼ���ƽ���ɼ�
//using namespace std;
//
//const int Size = 10;
//
//int enter(double score[], int n);
//void display(double ar[], int n);
//void averge(double ar[], int n);
//
//int main(void)
//{
//	double score[Size];
//
//	int count= enter(score, Size);
//	display(score, count);
//	averge(score, count);
//
//	return 0;
//}
////���뺯��
//int enter(double score[], int n)
//{
//	int i = 0;
//	cout << "Please enter 10 golf score: ";
//	while (n > 0 && cin >> score[i])
//	{
//		n--;
//		i++;
//	}
//
//	return i;	//���������û��Ϸ���������ָ���
//}
////��ʾ����
//void display(double ar[], int n)
//{
//	for (int i = 0; i < n; i++)
//		cout << ar[i] << " ";
//	cout << endl;
//}
////��ƽ��ֵ
//void averge(double ar[], int n)
//{
//	double sum = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		sum += ar[i];
//	}
//
//	cout << "averge = " << sum / n << endl;
//}