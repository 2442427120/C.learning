//包含对象成员的类
//Student类中包含了string类对象和valarray对象，并可以通过公有的方法访问string和valarray类的方法
#include "studentc.h"

const int pupils = 3;
const int quizzes = 5;

void set(Student& sa, int n);

int main(void)
{
	Student ada[pupils] = { Student(quizzes), Student(quizzes), Student(quizzes) };

	int i;
	for (i = 0; i < pupils; i++)
		set(ada[i], quizzes);
	cout << "\nStudent List:\n";
	for (i = 0; i < pupils; i++)
		cout << ada[i].Name() << endl;
	cout << "\nResult:";
	for (i = 0; i < pupils; i++)
	{
		cout << endl << ada[i];
		cout << "average: " << ada[i].Average() << endl;
	}
	cout << "Done\n";

	return 0;
}

void set(Student& sa, int n)
{
	cout << "Please enter the student's name: ";
	getline(cin, sa);
	cout << "Please enter " << n << " quiz scores:\n";
	for (int i = 0; i < n; i++)
		cin >> sa[i];
	while (cin.get() != '\n');
}