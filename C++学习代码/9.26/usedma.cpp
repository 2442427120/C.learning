//#include "dma.h"
//
//int main(void)
//{
//	baseDMA shirt("Portabelly", 8);
//	lacksDMA balloon("Blimpo", 4, "red");
//
//	cout << "Display baseDMA object:\n";
//	cout << shirt << endl;
//	cout << "Display lacksDMA object:\n";
//	cout << balloon << endl;
//
//	lacksDMA balloon2(balloon);
//	cout << "Result of lacksDMA copy:\n";
//	cout << balloon2 << endl;
//
//	hasDMA map("Keys", 5, "Mercator");
//	cout << "Display hasDMA object:\n";
//	cout << map << endl;
//
//	hasDMA map2 = map;	//用map对象初始化map2对象，调用复制构造函数
//	//hasDMA map2;	//未初始化
//	//map2 = map;	//此时将map对象赋值给map2对象，调用的是重载的=运算符
//	cout << "Result of hasDMA copy:\n";
//	cout << map2 << endl;
//
//	ABC* p_abc;
//	cout << "Pointer shirt:\n";
//	p_abc = &shirt;
//	p_abc->View();
//	cout << "Pointer balloon:\n";
//	p_abc = &balloon;
//	p_abc->View();
//	cout << "Pointer map2:\n";
//	p_abc = &map2;
//	p_abc->View();
//
//	return 0;
//}