// 2.下面是类Cpmv的声明：
//class Cpmv
//{
//public:
//	struct Info
//	{
//		string qcode;
//		string zcode;
//	};
//private:
//	Info* pi;
//public:
//	Cpmv();
//	Cpmv(string q, string z);
//	Cpmv(const Cpmv& cp);
//	Cpmv(Cpmv&& mv);
//	~Cpmv();
//	Cpmv& operator=(const Cpmv& cp);
//	Cpmv& operator=(Cpmv&& mv);
//	Cpmv operator+(const Cpmv& obj) const;
//	void Display() const;
//};
// 函数operator+应创建一个对象，其成员qcode和zcode有操作数的相应成员拼接而成。请提供为移动构造函数和移动赋
// 值运算符实现移动语义的代码。编写一个程序使用所有这些方法的程序。为方便测试，让各个方法都显示特定的内容，
// 以便直到它们被调用。
//#include "cpmv.h"
//
//int main(void)
//{
//	Cpmv cp1("hello", "world");
//	cp1.Display();
//
//	Cpmv cp2(cp1);	//调用赋值构造函数
//	cp2.Display();	
//	Cpmv cp3(cp1 + cp2); //调用移动赋值构造函数和重载的+运算符
//	cp3.Display();
//
//	Cpmv cp4;
//	cp4 = cp3;	//调用赋值运算符
//	cp4.Display();
//
//	Cpmv cp5;
//	cp5 = cp1 + cp2;	//调用移动赋值运算符
//	cp5.Display();
//
//	return 0;
//}