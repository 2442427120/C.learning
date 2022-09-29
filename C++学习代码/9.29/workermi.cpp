//#include "workermi.h"
//
//Worker::~Worker() {}
//
//void Worker::Get()
//{
//	cout << "Enter work's name: ";
//	getline(cin, fullname);
//	cout << "Enter work's ID: ";
//	cin >> id;
//	while (cin.get() != '\n');
//}
//
//void Worker::Data() const
//{
//	cout << "Name: " << fullname << endl;
//	cout << "Employee ID: " << id << endl;
//}
//
////Waiter派生类
//void Waiter::Set()
//{
//	cout << "Enter waiter's name: ";
//	Worker::Get();
//	Get();
//}
//
//void Waiter::Show() const
//{
//	cout << "Category: waiter\n";
//	Worker::Data();
//	Data();
//}
//
//void Waiter::Data() const
//{
//	cout << "Panache rating: " << panache << endl;
//}
//
//void Waiter::Get()
//{
//	cout << "Enter waiter's panache rating: ";
//	cin >> panache;
//	while (cin.get() != '\n');
//}
//
//
////Singer类
//const char* Singer::pv[Singer::Vtypes] = { "other", "alto", "contralto", "soprano", "bass", "baritone", "tenor" };
//
//void Singer::Set()
//{
//	cout << "Enter singer's name:\n";
//	Worker::Get();
//	Get();
//}
//
//void Singer::Show() const
//{
//	cout << "Category: singer:\n";
//	Worker::Data();
//	Data();
//}
//
//void Singer::Data() const
//{
//	cout << "Vocal range: " << pv[voice] << endl;
//}
//
//void Singer::Get()
//{
//	cout << "Enter number for singer's vocal range:\n";
//	int i;
//	for (i = 0; i < Vtypes; i++)
//	{
//		cout << i << ": " << pv[i] << " ";
//		if (i % 4 == 3)
//			cout << endl;
//	}
//	if (i % 4 != 0)
//		cout << endl;
//	while (cin >> voice && (voice < 0 || voice >= Vtypes))
//		cout << "Please enter a value >= 0 and < " << Vtypes << endl;
//
//	while (cin.get() != '\n');
//}
//
////SingingWaiter类
//void SingingWaiter::Data() const
//{
//	Singer::Data();
//	Waiter::Data();
//}
//
//void SingingWaiter::Get()
//{
//	Waiter::Get();
//	Singer::Get();
//}
//
//void SingingWaiter::Set()
//{
//	cout << "Enter singing waiter's name:\n";
//	Worker::Get();
//	Get();
//}
//
//void SingingWaiter::Show() const
//{
//	cout << "Category: singing waiter:\n";
//	Worker::Data();
//	Data();
//}