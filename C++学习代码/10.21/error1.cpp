//�쳣
//�ó�����hmean()�����������ƽ������ֵ�����������������������н׶Σ�������������Ϊ�෴��:
// ��û���쳣����ʱ�����������෴�����������������ĸ���������ʾ��cout������ֵ��ʾΪinf
// �����쳣��������abort()������ֹ����
//#include <iostream>
//
//double hmean(double a, double b);
//
//int main(void)
//{
//	double x, y, z;
//
//	std::cout << "Enter two numbers: ";
//	while (std::cin >> x >> y)
//	{
//		z = hmean(x, y);
//		std::cout << "Harmonic mean of " << x << " and " << y << " is " << z << std::endl;
//		std::cout << "Enter next set of nubmers <q to quit>: ";
//	}
//
//	return 0;
//}
//
//double hmean(double a, double b)
//{
//	if (a == -b)
//	{
//		std::cout << "nutenale arguement to hmean()\n";
//		abort();
//	}
//
//	return 2 * a * b / (a + b);
//}