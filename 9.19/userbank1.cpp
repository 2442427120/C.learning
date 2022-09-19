//Heather银行进行的研究表明，ATM客户不希望排队时间超过1分钟。使用程序清单12.10中的模拟，找出平要使平均等待
//时间为1分钟，每小时到达的客户数应为多少(试验时间不短于100小时)。
#include "bank1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main(void)
{
	srand(time(0));

	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter maximum size of queue: ";	//队列的大小
	int qs;
	cin >> qs;
	Queue line(qs);

	cout << "Enter the number of simulation hours: ";	//模拟小时数
	int hours;
	cin >> hours;
	long cyclelimit = MIN_PER_HR * hours;

	cout << "Enter the average number of customers per hour: ";	//每小时平均客户数
	double perhour;
	cin >> perhour;
	double min_per_cust;
	min_per_cust = MIN_PER_HR / perhour;

	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	long wait_time = 0;
	long line_wait = 0;	//累积排队时间

	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))
		{
			if (line.isfull())
				turnaways++;
			else
			{
				customers++;
				temp.set(cycle);
				line.enqueue(temp);
			}
		}
		if (wait_time <= 0 && !line.isempty())
		{
			line.dequeue(temp);
			wait_time = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
			wait_time--;
		sum_line += line.queuecount();
	}

	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << " customers served: " << served << endl;
		cout << " turnaways: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)sum_line / cyclelimit << endl;
		cout << " average wait time: " << (double)line_wait / served << " minutes\n";
	}
	else
		cout << "No customer!\n";
	cout << "Done!\n";

	return 0;
}

bool newcustomer(double x)
{
	return (rand() * x / RAND_MAX < 1);
}