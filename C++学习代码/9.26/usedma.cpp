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
//	hasDMA map2 = map;	//��map�����ʼ��map2���󣬵��ø��ƹ��캯��
//	//hasDMA map2;	//δ��ʼ��
//	//map2 = map;	//��ʱ��map����ֵ��map2���󣬵��õ������ص�=�����
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