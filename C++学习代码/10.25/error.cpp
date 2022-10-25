//��C++ Primer Plus����ʮ���±����ϰ��2��
//�޸ĳ����嵥15.11��ʹ�����쳣���Ǵ�ͷ�ļ�<stdexcept>�ṩ��logic_error�������������ࡣ��ÿ��what()��������
//�溯��������������ʡ��쳣�����ô洢����Ĳ���ֵ����ֻ��֧��what()������
//#include <iostream>
//#include <cmath>
//#include <stdexcept>
//#include <string>
//
//class bad_hmean : public std::logic_error
//{
//public:
//	bad_hmean(const std::string& s = "invalid, hmean arguments: a = -b\n") : logic_error(s) {}
//};
//
//class bad_gmean : public std::logic_error
//{
//public:
//	bad_gmean(const std::string& s = "invalid, gmean argument should be >= 0\n") : logic_error(s) {}
//};
//
//double hmean(double a, double b);
//double gmean(double a, double b);
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
//			std::cout << "Harmonic mean of " << x << " and " << y << " is " << z << std::endl;
//			std::cout << "Geometric mean of " << x << " and " << y << " is " << gmean(x, y) << std::endl;
//			std::cout << "Enter next set of nubmers <q to quit>: ";
//		}
//		catch (bad_hmean& bh)	//ʹ�ô�����򲶻��쳣
//		{
//			std::cout << bh.what();
//			std::cout << "Try again:";
//			continue;
//		}
//		catch (bad_gmean& bg)
//		{
//			std::cout << bg.what();
//			/*std::cout << "Values used: " << bg.v1 << ", " << bg.v2 << std::endl;*/
//			std::cout << "Sorry, you don't get to play any more.\n";
//			break;
//		}
//	}
//	std::cout << "Bye.\n";
//
//	return 0;
//}
//
//double hmean(double a, double b)
//{
//	if (a == -b)
//		throw bad_hmean();	//�����쳣
//
//	return 2 * a * b / (a + b);
//}
//
//double gmean(double a, double b)
//{
//	if (a < 0 || b < 0)
//		throw bad_gmean();
//	return std::sqrt(a * b);
//}