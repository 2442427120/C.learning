//6.Heaher������֪��������ٿ���һ̨ATM���������Ρ����ģ������޸ģ��԰����������С����赱��һ̨ATMǰ��
//�Ŷ��������ڵڶ�̨ATMʱ���ͻ������ڵ�һ�ӣ��������ڵڶ��ӡ�Ȼ�����ҳ�Ҫʹƽ���Ⱥ�ʱ��Ϊ1���ӣ�ûСʱ��
//��Ŀͻ���Ӧ��Ϊ����(ע�⣬����һ�������Ե����⣬����ATM�����ӱ��������ܱ�֤ÿСʱ����Ŀͻ�����Ҳ������
//��ȷ���ͻ��Ⱥ��ʱ������1����)?
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
//	cout << "Enter maximum size of queue: ";	//���еĴ�С
//	int qs;
//	cin >> qs;
//	Queue line0(qs);	//����1��ATM����1��
//	Queue line1(qs);	//����2��ATM����2��
//
//	cout << "Enter the number of simulation hours: ";	//ģ��Сʱ��
//	int hours;
//	cin >> hours;
//	long cyclelimit = MIN_PER_HR * hours;
//
//	cout << "Enter the average number of customers per hour: ";	//ÿСʱƽ���ͻ���
//	double perhour;
//	cin >> perhour;
//	double min_per_cust;
//	min_per_cust = MIN_PER_HR / perhour;
//
//	Item temp;
//	long turnaways = 0;	//���ܾ��Ŀͻ���
//	long customers = 0;	//�������еĿͻ���
//	long served = 0;	//������ɵĿͻ���
//	long sum_line = 0;	//�����е�����
//	long wait_time0 = 0;	//�ڵ�һ̨ATM���Ĳ���ʱ��
//	long wait_time1 = 0;	//�ڵڶ�̨ATM���Ĳ���ʱ��
//	long line_wait0 = 0;	//ATM1�ۻ��Ŷ�ʱ��
//	long line_wait1 = 0;	//ATM2�ۻ��Ŷ�ʱ��
//
//	for (int cycle = 0; cycle < cyclelimit; cycle++)	
//	{
//		if (newcustomer(min_per_cust))	//�¿ͻ���������
//		{
//			//�����Ӷ���ʱ�����Ӷ��ܾ��ͻ����
//			if (line0.isfull() && line1.isfull())	
//				turnaways++;
//			//������1����С�ڵ��ڶ���2ʱ���¿ͻ��������1�Ŷ�
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
//		//���ۿͻ��ǽ�����1����2��������ǰ��Ŀͻ���Ӧ����ɲ���
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


