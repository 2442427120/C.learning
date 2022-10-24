//5.利用static_cast使类进行向上或向下的类型转换
//#include <iostream>
//
//using namespace std;
//
//class A
//{
//};
//
//class B : public A
//{
//};
//
//class C
//{
//};
//
//int main(void)
//{
//	A a;
//	B b;
//
//	//A* pa = &b;	//不使用static_cast的转换，由系统隐式的转换
//	//将b的地址转换成A*，向上转换
//	A* pa = static_cast<A*> (&b);
//	//将a的地址转换成B*，向下转换
//	//B* pb = &a;	//显然，不使用强制类型转换，向下转换并不行
//	//B* pb = (B*)&a;
//	B* pb = static_cast<B*> (&a);
//
//	return 0;
//}