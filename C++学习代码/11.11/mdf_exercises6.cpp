////《C++ Primer Plus》第十六章编程练习第6题修改
//#include <queue>
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
////customer类的定义
//class Customer
//{
//private:
//	long arrive;	//顾客到达时间
//	int processtime;	//顾客操作时间
//public:
//	Customer() { arrive = processtime = 0; }
//	void set(long when);
//	long when() const { return arrive; }
//	int ptime() const { return processtime; }
//};
//
//void Customer::set(long when)
//{
//	processtime = rand() % 3 + 1;
//	arrive = when;
//}
//
//typedef Customer Item;
//
//const int MIN_PER_HR = 60;
//
//bool newcustomer(double x);
//
//int main(void)
//{
//	srand(time(0));
//
//	cout << "Case Study: Bank of Heather Automatic Teller\n";
//	cout << "Enter maximum size of queue: ";
//	int qs;
//	cin >> qs;
//	/*Queue line(qs);*/
//	queue<Item> line; //队列里放的元素类型为customer类
//
//	cout << "Enter the number of simulation hours: ";	//模拟小时数
//	int hours;
//	cin >> hours;
//	long cyclelimit = MIN_PER_HR * hours;
//
//	cout << "Enter the average number of customers per hour: ";	//每小时平均客户数
//	double perhour;
//	cin >> perhour;
//	double min_per_cust;
//	min_per_cust = MIN_PER_HR / perhour;
//
//	Item temp;
//	long turnaways = 0;
//	long customers = 0;
//	long served = 0;
//	long sum_line = 0;
//	long wait_time = 0;
//	long line_wait = 0;
//
//	for (int cycle = 0; cycle < cyclelimit; cycle++)
//	{
//		if (newcustomer(min_per_cust))
//		{
//			if (line.size() == qs)
//				turnaways++;
//			else
//			{
//			customers++;
//			temp.set(cycle);
//			line.push(temp);
//			}
//		}
//		if (wait_time <= 0 && !line.empty())
//		{
//			line.pop();
//			wait_time = temp.ptime();
//			line_wait += cycle - temp.when();
//			served++;
//		}
//		if (wait_time > 0)
//			wait_time--;
//		sum_line += line.size();
//	}
//
//	if (customers > 0)
//	{
//		/*turnaways = customers - served;*/	//被拒绝的客户数
//
//		cout << "customers accepted: " << customers << endl;
//		cout << " customers served: " << served << endl;
//		cout << " turnaways: " << turnaways << endl;
//		cout << "average queue size: ";
//		cout.precision(2);
//		cout.setf(ios_base::fixed, ios_base::floatfield);
//		cout << (double)sum_line / cyclelimit << endl;
//		cout << " average wait time: " << (double)line_wait / served << " minutes\n";
//	}
//	else
//		cout << "No customer!\n";
//	cout << "Done!\n";
//
//	return 0;
//}
//
//bool newcustomer(double x)
//{
//	return (rand() * x / RAND_MAX < 1);
//}