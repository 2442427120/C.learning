//C++�쳣������ƣ�
//�����쳣��3����ɲ��֣�
//*�����쳣 ��throw�ؼ��֣�
//*ʹ�ô�����򲶻��쳣 ��catch�ؼ��֣�
//*ʹ��try�� (try�ؼ���)

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
//		try  //try���ʶ�����ض����쳣���ܱ�hmean()����
//		{
//			z = hmean(x, y);
//		}
//		catch (const char* s)	//ʹ�ô�����򲶻��쳣
//		{
//			std::cout << s << std::endl;
//			std::cout << "Enter a new pair of numbers: ";
//			continue;
//		}
//
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
//		throw "bad hmean() arguments: a = -b not allowed";	//�����쳣
//
//	return 2 * a * b / (a + b);
//}