//4.static_cast��һ���÷�

//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	//û�о���C��C++�﷨��ǿ������ת������Ϊ10/3ȡ�����������֣���ʹ����x1Ϊdouble���ͣ�ʵ����ʾ��x1Ҳ������
//	double x1 = 10 / 3;
//	cout << "x1 = " << x1 << endl;
//	//����C�﷨��ǿ������ת������10ת��Ϊdouble���ͣ�����x2 = 10/3������ʾ��double���͵�ֵ,x2Ϊdouble����
//	double x2 = (double)10 / 3;
//	cout << "x2 = " << x2 << endl;
//	//����C++�﷨��ǿ������ת����Ч��ͬC�����﷨��Ч����ͬ����������C++�涨
//	double x3 = static_cast<double>(10) / 3;
//	cout << "x3 = " << x3 << endl;
// 
//	return 0;
//}