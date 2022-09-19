//6.Heaher银行想知道，如果再开设一台ATM，情况将如何。请对模拟进行修改，以包含两个队列。假设当第一台ATM前的
//排队人数少于第二台ATM时，客户将排在第一队，否则将排在第二队。然后再找出要使平均等候时间为1分钟，没小时到
//达的客户数应该为多少(注意，这是一个非线性的问题，即将ATM数量加倍，并不能保证每小时处理的客户数量也翻倍，
//并确保客户等候的时间少于1分钟)?
//#include "bank2.h"
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
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
//	cout << "Enter maximum size of queue: ";	//队列的大小
//	int qs;
//	cin >> qs;
//	Queue line0(qs);	//队列1（ATM机器1）
//	Queue line1(qs);	//队列2（ATM机器2）
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
//	long turnaways = 0;	//被拒绝的客户数
//	long customers = 0;	//进入银行的客户数
//	long served = 0;	//操作完成的客户数
//	long sum_line = 0;	//队列中的人数
//	long wait_time0 = 0;	//在第一台ATM机的操作时间
//	long wait_time1 = 0;	//在第二台ATM机的操作时间
//	long line_wait0 = 0;	//ATM1累积排队时间
//	long line_wait1 = 0;	//ATM2累积排队时间
//
//	for (int cycle = 0; cycle < cyclelimit; cycle++)	
//	{
//		if (newcustomer(min_per_cust))	//新客户进入银行
//		{
//			//当两队都满时，两队都拒绝客户入队
//			if (line0.isfull() && line1.isfull())	
//				turnaways++;
//			//当队列1长度小于等于队列2时，新客户进入队列1排队
//			else if (line0.queuecount() <= line1.queuecount())
//			{
//				customers++;
//				temp.set(cycle);
//				line0.enqueue(temp);
//			}
//			else
//			{
//				customers++;
//				temp.set(cycle);
//				line1.enqueue(temp);
//			}
//		}
//		
//		if (wait_time0 <= 0 && !line0.isempty())
//		{
//			line0.dequeue(temp);
//			wait_time0 = temp.ptime();
//			line_wait0 += cycle - temp.when();
//			served++;
//		}
//		
//		if (wait_time1 <= 0 && !line1.isempty())
//		{
//			line1.dequeue(temp);
//			wait_time1 = temp.ptime();
//			line_wait1 += cycle - temp.when();
//			served++;
//		}
//		//无论客户是进队列1还是2，两队最前面的客户都应该完成操作
//		if (wait_time0 > 0)	
//			wait_time0--;
//		sum_line += line0.queuecount();
//		if (wait_time1)
//			wait_time1--;
//		sum_line += line1.queuecount();
//	}
//
//	if (customers > 0)
//	{
//		cout << "customers accepted: " << customers << endl;
//		cout << " customers served: " << served << endl;
//		cout << " turnaways: " << turnaways << endl;
//		cout << "average queue size: ";
//		cout.precision(2);
//		cout.setf(ios_base::fixed, ios_base::floatfield);
//		cout << (double)sum_line / cyclelimit << endl;
//		cout << " average wait time: " << (double)(line_wait0 + line_wait1 )/ served << " minutes\n";
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


