//ʹ������������άʸ��
//* �ô�С�����ȣ��ͷ��򣨽Ƕȣ�����ʸ��
//* �÷���x��y����ʾʸ��
//�˳���ʵ���˶�һ��ʸ����һЩ���������Ƚ�ʸ����Ϊֱ������ϵ��ʾ�ͼ������ʾ��ͨ��ö�ٴ���������������ʾ������ģʽ����
//��������ʱ���û��޸�ʸ����һ�ֱ�ʾģʽ�������Զ�������һ�ֱ�ʾ��ͬʱ��ʹ������������غ���Ԫ�����ķ�����ʸ������
//ʵ�֡�
// �ó�����ʾ���ʹ��Vector�ࣺ
// �ó���ģ���������������·���⡣����˼�ǣ���һ�����쵽�ֵ����¡�����˿�ʼ�߶�����ÿһ���ķ���������ģ���ǰһ��
// ��ͬ������������һ�ֱ����ǣ�������ߵ������50Ӣ�ߴ���Ҫ���ٲ�����ʸ���ĽǶȿ������൱�ڲ��Ͻ����������ʸ����ӣ�
// ֱ�����ȳ���50�ߡ�
// �ó��������û�ѡ�����߾���Ͳ������ó�����һ����������ʾλ�ã�һ��ʸ�����������浽��ָ�����봦�������ָ�ʽ��ʾ����
// ��Ĳ��������Կ�����������ǰ�����൱������Ȼ����1000����ÿ���ľ���Ϊ2Ӣ�ߣ�������������ֻ��50Ӣ�ߡ������������
// �����ߵľ����루����Ϊ50Ӣ�ߣ����Բ�������ָ���������߷�ʽ�ĵ�Ч�ԡ�����ı䷽��ʹ��ƽ��ֵԶԶС�ڲ�����Ϊ�����ѡ
// ���򣬸ó���ʹ���˱�׼�⺯��rand()��srand()��time()��
//
#include "vect.h"
#include <cstdlib>
#include <ctime>

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

	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
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

		//��һ�ֽ����󣬽������ͽ����������Ϊ0
		cout << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}

	cout << "Bye\n";

	return 0;
}

//���õ���Ԫ������<<�����
//#include "mytime3.h"
//
//int main(void)
//{
//	Time weeding(4, 35);
//	Time waxing(2, 47);
//	Time total;
//	Time diff;
//	Time adjusted;
//	Time adjusted1;
//
//	cout << "weeding time = ";
//	/*weeding.Show();*/
//	cout << weeding;	//����<<���������ʾ�������
//	cout << endl;
//
//	cout << "waxing time = ";
//	/*waxing.Show();*/
//	cout << waxing;
//	cout << endl;
//
//	cout << "total work time = ";
//	total = weeding + waxing;	//using operator+();
//	/*total.Show();*/
//	cout << total;
//	cout << endl;
//
//	diff = weeding - waxing;	//using operator-();
//	cout << "weeding time - waxing time = ";
//	/*diff.Show();*/
//	cout << diff;
//	cout << endl;
//
//	adjusted = total * 1.5;	//using operator*()
//	cout << "adjusted work time = ";
//	/*adjusted.Show();*/
//	cout << adjusted;
//	cout << endl;
//
//	adjusted1 = 1.5 * total;	//��Ԫ��������*�������ʹ��*��߿���ʹ�÷���
//	cout << "adjusted1 work time = ";
//	/*adjusted1.Show();*/
//	cout << adjusted1;
//	cout << endl;
//
//	cout << "**************************************\n";
//	cout << weeding << waxing;	//��ʾcout�������
//
//	return 0;
//}