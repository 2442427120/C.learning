#include <iostream>
#include <cctype>
#include <array>
#include <string>

//9.这个练习让您编写处理数组和结构的函数。下面是程序的框架，请提供其中描述的函数，以完成该程序。
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

//8.在不使用array类的情况下完成程序清单7.15所做的工作。编写两个这样的版本：
//a. 使用const char*数组存储表示季度名称的字符串，并使用double数组存储开支
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

//b. 使用const char*数组存储存储表示季度名称的字符串，并使用一个结构，该结构只有一个成员——一个用于存储
//开支的double数组。这种设计与使用array类的基本设计类似
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

//7.修改程序清单7.7中的3个数组处理函数，使之使用两个指针参数来表示区间。fill_array()函数不返回实际读取了
//多少个数字，而是返回一个指针，该指针指向最后被填充的位置；其他的函数可以将该指针作为第二个参数，以标识
//数据结尾。
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

//6.编写一个程序，它使用下列函数：
//Fill_array()将一个double数组的名称和长度作为参数。它提示用户输入double值，并将这些值存储到数组中。当数
//组被填满或用户输入非数字时，输入将停止，并返回实际输入了多少个数字。
//Show_array()将一个double数组的名称和长度作为参数，并显示该数组的内容。
//程序将使用这些函数来填充数组，然后显示数组；反转数组，然后显示数组；反转数组中除第一个和最后一个元素之外
//的所有元素，然后显示数组。
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
////将数组反转 - 除第一个和最后一个外数组的内容全部反转
//void reverse_array(array<double, Size>* ar, int n)
//{
//	double tmp;
//	int i, min, max; //在循环外定义i，防止出现未引用的局部变量
//	for (i = 0, min = 1, max = n - 2; i < (n / 2 - 1); i++, min++,max--)
//	{
//		tmp = (*ar)[min];
//		(*ar)[min] = (*ar)[max];
//		(*ar)[max] = tmp;
//	}
//}

//5.定义一个递归函数，接受一个整数参数，并返回该参数的阶乘。前面讲过，3的阶乘写作3！，等于3*2!，依此类推；
//而0!被定义为1.通用的计算公式，如果n大于另，则n！=n*（n-1）！。在程序中对该函数进行测试，程序使用循环让
//用户输入不同的值，程序将报告这些值的阶乘。
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

//4.许多州的彩票发行机构都使用如程序清单7.4所示的简单彩票玩法的变体。在这些玩法中，玩家从一组被称为域
//号码(field number)的号码中选择几个。例如，可以从域号码1-47中选择5个号码；还可以从第二个区间(如1-27)选
//择一个号码(称为特选号码)。要赢得头奖，必须正确猜中所有的号码。中头奖的几率是选中所有域号码的几率与选
//中特选号码几率的乘积。例如，在这个例子中，中头奖的几率是从47个号码中正确选取5个号码的几率与从27个号码
//中正确选择1个号码的几率的乘积。请修改程序清单7.4，以计算中得这种彩票头奖的几率。
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

//3.下面是一个结构声明:
//struct box
//{
//		char maker[40];
//		float height;
//		float width;
//		float length;
//		float voluem;
//};
//a. 编写一个函数，按值传递box结构，并显示每个成员的值
//b. 编写一个函数，传递box结构的地址，并将voluem成员设置为其他三维长度的乘积
//c. 编写一个使用这两个函数的简单程序
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

//2.编写一个程序，要求用户输入最多10个高尔夫成绩，并将成绩存储在一个数组中。程序允许用户提早结束输入,并
//在一行上显示所有成绩，然后报告平均成绩。请使用3个数组处理函数来分别进行输入，显示和计算平均成绩
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
////输入函数
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
//	return i;	//结束返回用户合法输入的数字个数
//}
////显示函数
//void display(double ar[], int n)
//{
//	for (int i = 0; i < n; i++)
//		cout << ar[i] << " ";
//	cout << endl;
//}
////求平均值
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