//3.�޸ĳ����嵥11.15��ʹ֮����N�β����е���ߡ���ͺ�ƽ������(����N���û����������)�������Ǳ���ÿ�β���
//�Ľ��
#include "vect2.h"

using namespace VECTOR;

int main(void)
{
	srand(time(NULL));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	int count = 0;
	unsigned long copy_steps_max = 0;
	unsigned long copy_steps_min = 999;
	double av_steps = 0;
	

	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		count++;
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;

		while (result.magval() < target)
		{
			direction = rand() % 360;	//�������
			step.reset(dstep, direction, Vector::POL);	//��POLģʽ������һ���ĳ���step
			result = result + step; //ʹ��+��������أ���step�ӵ�result��
			steps++;	//�ߵĲ�����һ
		}
		cout << "After " << steps << " steps, the subject has following location:\n";
		cout << result;	//<<����������أ���ֱ������ϵ����ʽ��ʾ
		result.polar_mode();	//�������Ϊ��������ϵ��POLģʽ
		cout << "or\n " << result;	//�Լ�����ϵ����ʽ��ʾ
		cout << "Average outward distance per step = " << result.magval() / steps << endl;

		copy_steps_max = steps > copy_steps_max ? steps : copy_steps_max;	//�õ�N���е����ֵ
		copy_steps_min = steps < copy_steps_min ? steps : copy_steps_min;	//�õ�N���е���Сֵ
		av_steps += steps;	//N�ε��ܲ���

		//��һ�ֽ����󣬽������ͽ����������Ϊ0
		cout << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}

	cout << "һ��������" << count << "�β���,���Ա������£�" << endl;
	cout << "�������" << copy_steps_max << endl;
	cout << "��С������" << copy_steps_min << endl;
	cout << "ƽ������: " << av_steps / count << endl;

	cout << "Bye\n";

	return 0;
}

//2.��Vector���ͷ�ļ��������嵥11.13����ʵ���ļ��������嵥11.14�������޸ģ�ʹ�䲻�ٴ洢ʸ���ĳ��ȺͽǶȣ�
// ������magval()��angval()������ʱ�������ǡ�
// Ӧ�������нӿڲ��䣨���з������������䣩������˽�в��֣�����һЩ˽�з������ͷ���ʵ�ֽ����޸ġ�Ȼ��ʹ
// ʹ�ó����嵥11.15���޸ĺ�İ汾���в��ԣ����Ӧ������ǰ��ͬ����ΪVector��Ĺ��нӿ���ԭ����ͬ��
//#include "vect1.h"
//
//using namespace VECTOR;
//
//int main(void)
//{
//	srand(time(NULL));
//	double direction;
//	Vector step;
//	Vector result(0.0, 0.0);
//	unsigned long steps = 0;
//	double target;
//	double dstep;
//
//	cout << "Enter target distance (q to quit): ";
//	while (cin >> target)
//	{
//		cout << "Enter step length: ";
//		if (!(cin >> dstep))
//			break;
//
//		while (result.magval() < target)
//		{
//			direction = rand() % 360;	//�������
//			step.reset(dstep, direction, Vector::POL);	//��POLģʽ������һ���ĳ���step
//			result = result + step; //ʹ��+��������أ���step�ӵ�result��
//			steps++;	//�ߵĲ�����һ
//		}
//		cout << "After " << steps << " steps, the subject has following location:\n";
//		cout << result;	//<<����������أ���ֱ������ϵ����ʽ��ʾ
//		result.polar_mode();	//�������Ϊ��������ϵ��POLģʽ
//		cout << "or\n " << result;	//�Լ�����ϵ����ʽ��ʾ
//		cout << "Average outward distance per step = " << result.magval() / steps << endl;
//
//		//��һ�ֽ����󣬽������ͽ����������Ϊ0
//		cout << endl;
//		steps = 0;
//		result.reset(0.0, 0.0);
//		cout << "Enter target distance (q to quit): ";
//	}
//
//	cout << "Bye\n";
//
//	return 0;
//}

//1.�޸ĳ����嵥11.15��ʹ֮��һϵ�����������������λ��д�뵽�ļ��С�����ÿ��λ�ã��ò��Ž��б�ʾ�����⣬��
//�ó��򽫳�ʼ������Ŀ�����Ͳ������Լ����С��д����ļ��С����ļ����������������ƣ�
// Target Distanc: 100, Step Size: 20
// 0: (x, y) = (0, 0)
// 1: (x, y) = (-11.4715, 16.383)
// ...
// 28: (x, y) = (58.6749, -89.7309)
// After 28 steps, the subject has the following location:
// (x, y) = (58.6749, -89.7309)
// or
// (m,a) = (107.212, -56.8194)
// Average outward distance per step = 3.97081
//#include "vect.h"
//#include <cstdlib>
//#include <ctime>
//#include <fstream>
//
//using namespace VECTOR;
//
//int main(void)
//{
//	srand(time(NULL));
//	double direction;
//	Vector step;
//	Vector result(0.0, 0.0);
//	unsigned long steps = 0;
//	double target;
//	double dstep;
//	int i = 0;
//
//	//�����ļ��Ķ��󣬽������cout����ΪoutFile���ɽ�����д�뵽�ĵ���
//	//�˳���û���ڿ���̨�����ֻд���ļ��У��������ֻ�����ļ�����ʾ
//	ofstream outFile;
//	outFile.open("user_vect.txt");
//	
//
//	cout << "Enter target distance (q to quit): ";
//	cin >> target;
//	cout << "Enter step length: ";
//	if (!(cin >> dstep))
//		return 0;
//
//	outFile << "Target Distance: " << target << ", " << "Step Size: " << dstep << endl;
//	outFile << i << ": " << result;
//	while (result.magval() < target)
//	{
//		i++;
//		direction = rand() % 360;	//�������
//		step.reset(dstep, direction, Vector::POL);	//��POLģʽ������һ���ĳ���step
//		result = result + step; //ʹ��+��������أ���step�ӵ�result��
//		steps++;	//�ߵĲ�����һ
//
//		outFile << i << ": " << result;
//	}
//	outFile << "After " << steps << " steps, the subject has following location:\n";
//	outFile << result;	//<<����������أ���ֱ������ϵ����ʽ��ʾ
//	result.polar_mode();	//�������Ϊ��������ϵ��POLģʽ
//	outFile << "or\n " << result;	//�Լ�����ϵ����ʽ��ʾ
//	outFile << "Average outward distance per step = " << result.magval() / steps << endl;
//
//	//��һ�ֽ����󣬽������ͽ����������Ϊ0
//	outFile << endl;
//	steps = 0;
//	result.reset(0.0, 0.0);
// 
//	//while (cin >> target)
//	//{
//	//	cout << "Enter step length: ";
//	//	if (!(cin >> dstep))
//	//		break;
//
//	//	while (result.magval() < target)
//	//	{
//	//		direction = rand() % 360;	//�������
//	//		step.reset(dstep, direction, Vector::POL);	//��POLģʽ������һ���ĳ���step
//	//		result = result + step; //ʹ��+��������أ���step�ӵ�result��
//	//		steps++;	//�ߵĲ�����һ
//	//	}
//	//	cout << "After " << steps << " steps, the subject has following location:\n";
//	//	cout << result;	//<<����������أ���ֱ������ϵ����ʽ��ʾ
//	//	result.polar_mode();	//�������Ϊ��������ϵ��POLģʽ
//	//	cout << "or\n " << result;	//�Լ�����ϵ����ʽ��ʾ
//	//	cout << "Average outward distance per step = " << result.magval() / steps << endl;
//
//	//	//��һ�ֽ����󣬽������ͽ����������Ϊ0
//	//	cout << endl;
//	//	steps = 0;
//	//	result.reset(0.0, 0.0);
//	//	cout << "Enter target distance (q to quit): ";
//	//}
//
//	cout << "Bye\n";
//
//	return 0;
//}

//��ʾʹ��ת������ - ��ʽ����ת����������ʾ����ת������
//#include "stonewt1.h"
//
//int main(void)
//{
//	Stonewt poppins(9, 2.8);
//	double p_wt = poppins;	//��ʽ����ת��Ϊdouble���͵�ת������
//	cout << p_wt << " pounds\n";
//	cout << (int)poppins << " pounds\n";	//��ʽ����ת��Ϊint���͵�ת������
//	/*Stonewt poppins(9, 2.8);
//	double host = poppins;*/
//	/*Stonewt opppins = 125.8;*/
//
//	return 0;
//}

//ʹ����Ĺ��캯����ʼ����һЩStonewt���󣬲���������ת��
//#include "stonewt.h"
//
//void display(const Stonewt& st, int n);
//
//int main(void)
//{
//	Stonewt incognito = (Stonewt)275; //Stonewet incognito(275);  ���� Stonewt incognito = Stonewt(275);
//	Stonewt wolfe(285.7);
//	Stonewt taft(21, 8);
//
//	incognito.show_stn();
//	wolfe.show_stn();
//	taft.show_lbs();
//
//	cout << "*************************************\n";
//	incognito = (Stonewt)276.8;
//	taft = (Stonewt)325;
//
//	incognito.show_stn();
//	taft.show_lbs();
//	taft.show_stn();
//
//	cout << "**************************************\n";
//	display(taft, 2);
//	display((Stonewt)422, 2);	//����Զ�����ת��
//
//	return 0;
//}
//
//void display(const Stonewt& st, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Wow! ";
//		st.show_stn();
//	}
//}