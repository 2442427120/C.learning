//7.������������ɲ��֣�ʵ�����ֺ��������֡�������һ����д��ʽ�ǣ���3.0�� 4.0�������У�3.0��ʵ�����֣�4.0
// ���������֡�����a = ��A, Bi����c = ��C, Di��,��������һЩ�������㡣
// * �ӷ���a + c = (A + C,��B + D)i)��
// * ������a - c = (A - C, (B - D)i)��
// * �˷���a * c = (A * C - B * D, (A * D + B * C)i)��
// * �˷���x * c = (x * C, x * Di);	����xΪʵ��
// * ���~a = (-A, -Bi)��
// �붨��һ�������࣬�Ա�����ĳ������ʹ�����������ȷ�Ľ����
// #include <iostream>
// using namesapce std;
// #include "complex0.h"	//to avoid confusion with complex.h
// int main(void)
// {
//		complex a(3.0, 4.0);
//		complex c;
//		cout << "Enter a complex number (q to quit):\n";
//		while (cin >> c)
//		{
//			cout << "c is " << c << endl;
//			cout << "complex conjugate is " << ~c << endl;
//			cout << "a is " << a << endl;
//			cout << "a + c is " << a + c << endl;
//			cout << "a - c is " << a - c << endl;
//			cout << "a * c is " << a * c << endl;
//			cout << "2 * c is " << 2 * c << endl;
//			cout << "Enter a complexe number (q to quit):\n";
//		}
//		cout <<"Done!\n";
// 
//		return 0;
// }
//ע�⣬�������������<<��>>����׼C++ʹ��ͷ�ļ�complex�ṩ�˱����ʾ�����㷺�ĸ���֧�֣����Ӧ���Զ����
// ͷ�ļ�����Ϊcomplex0.h�����ⷨ������ͻ��Ӧ������ʹ��const��
// �����Ǹó�������������
// Enter a complex number (q to quit):
// real: 10
// imaginary: 12
// c is (10, 12i)
// complex conjugate is (10, -12i)
// a is (3, 4i)
// a + c is (13, 16i)
// a - c is (-7, -8i)
// a * c is (-18, 76i)
// 2 * c is (20, 24i) 
// Enter a complex number (q to quit):
// real: q
// Done!
#include <iostream>
#include "complex0.h"	//to avoid confusion with complex.h

using namespace std;

 int main(void)
 {
		complex a(3.0, 4.0);
		complex c;
		cout << "Enter a complex number (q to quit):\n";
		while (cin >> c)
		{
			cout << "c is " << c << endl;
			cout << "complex conjugate is " << ~c << endl;
			cout << "a is " << a << endl;
			cout << "a + c is " << a + c << endl;
			cout << "a - c is " << a - c << endl;
			cout << "a * c is " << a * c << endl;
			cout << "2 * c is " << 2 * c << endl;
			cout << "Enter a complexe number (q to quit):\n";
		}
		cout <<"Done!\n";
 
		return 0;
 }

//#include <iostream>
//using namespace std;
//int main(void)
//{
//	int num = '8';
//
//	cout << isdigit(num);
//
//	return 0;
//}

//6.���±�дStonewt�ࣨ�����嵥11.16�ͳ����嵥11.17��������ȫ��6����ϵ��������������pounds��Ա���бȽϣ�
//������һ��boolֵ����дһ������������һ������6��Stonewt��������飬�������������г�ʼ��ǰ3������Ȼ��
//ʹ��ѭ������ȡ��������ʣ��3������Ԫ�ص�ֵ�����ű�����С��Ԫ�ء�����Ԫ���Լ����ڻ����11Ӣʯ��Ԫ�ص���
//������򵥵ķ����Ǵ���һ��Stonewt���󣬲������ʼ��Ϊ11Ӣʯ��Ȼ����ͬ����������бȽϣ���
//#include "stonewt1.h"
//
//const int Size = 6;
//
//int main(void)
//{
//	int count = 0;
//	double u_pound;
//	Stonewt max;
//	Stonewt min(9999);
//	Stonewt stone(11);
//	Stonewt stonewt_arr[Size] =
//	{ Stonewt(22.2), Stonewt(33.3), Stonewt(11.1),Stonewt(), Stonewt(), Stonewt() };
//
//	cout << "��ΪStonewt�����" << Size - 3 << "������ֵ\n";
//	for (int i = 3; i < Size; i++)
//	{
//		cout << "��" << i + 1 << "������";
//		cin >> u_pound;
//		stonewt_arr[i] = Stonewt(u_pound);
//	}
//
//	for (int i = 0; i < Size; i++)
//	{
//		max = stonewt_arr[i] > max ? stonewt_arr[i] : max;
//		min = stonewt_arr[i] < min ? stonewt_arr[i] : min;
//
//		if (stonewt_arr[i] >= stone)
//		{
//			count++;
//		}
//	}
//
//	cout << "Stone���������poundsֵ����11����" << count << "��\n";
//	cout << "Stonewt��������е����ֵ��";
//	max.show_lbs();
//	cout << "Stonewt��������е���Сֵ��";
//	min.show_lbs();
//
//	/*for (int i = 0; i < Size - 1; i++)
//	{
//		for (int j = 0; j < Size - i - 1; i++)
//		{
//			if (stonewt_arr[j] > stonewt_arr[j + 1])
//			{
//				temp = stonewt_arr[j];
//				stonewt_arr[j] = stonewt_arr[j + 1];
//				stonewt_arr[j + 1] = temp;
//			}
//		}
//	}*/
//
//	return 0;
//}

//5.���±�дStonewt�ࣨ�����嵥11.16�ͳ����嵥11.17����ʹ����һ��״̬��Ա���ɸó�Ա���ƶ���Ӧת��ΪӢʯ��ʽ
//����������ʽ���Ǹ������ʽ������<<�������ʹ�������滻show_stn()��show_lbs()���������ؼӷ��������ͳ˷�����
// ���Ա���Զ�Stonewtֵ���мӡ����������㡣��дһ��ʹ�������෽������Ԫ��С��������������ࡣ
//#include "stonewt.h"
//
//int main(void)
//{
//	Stonewt stonewt1(348.14);
//	Stonewt stonewt2(169.94);
//	Stonewt sum;
//	Stonewt diff;
//	Stonewt mult;
//
//	cout << "----------��POUNDģʽ��----------\n";
//
//	cout << "��ʾstonewt1��stonewt2������:\n";
//	cout << stonewt1 << stonewt2;
//
//	cout << "stonewt1 + stonewt2������:\n";
//	sum = stonewt1 + stonewt2;
//	cout << sum;
//
//	cout << "stonewt1 - stonewt2������:\n";
//	diff = stonewt1 - stonewt2;
//	cout << diff;
//
//	cout << "stonewt2 * 5������:\n";
//	mult = stonewt2 * 5;
//	cout << mult;
//
//	cout << "5 * stonewt2������:\n";
//	mult = 5 * stonewt2;
//	cout << mult;
//
//	cout << "----------��STONEģʽ��----------\n";
//	stonewt1.stone_mode();
//	stonewt2.stone_mode();
//
//
//	cout << "��ʾstonewt1��stonewt2������:\n";
//	cout << stonewt1 << stonewt2;
//
//	cout << "stonewt1 + stonewt2������:\n";
//	sum = stonewt1 + stonewt2;
//	sum.stone_mode();
//	cout << sum;
//
//	cout << "stonewt1 - stonewt2������:\n";
//	diff = stonewt1 - stonewt2;
//	diff.stone_mode();
//	cout << diff;
//
//	cout << "stonewt2 * 5������:\n";
//	mult = stonewt2 * 5;
//	mult.stone_mode();
//	cout << mult;
//
//	cout << "5 * stonewt2������:\n";
//	mult = 5 * stonewt2;
//	mult.stone_mode();
//	cout << mult;
//
//
//	return 0;
//}

//4.���±�д���Time��ʾ���������嵥10.10�������嵥10.11�ͳ����嵥10.12����ʹ����Ԫ������ʵ�����е�����
//�������
//#include "time.h"
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