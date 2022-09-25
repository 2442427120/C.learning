//《C++ Primer Plus》第十三章编程练习第3题
//修改baseDma-lacksDma-hasDma类层次，让三个类都从一个ABC派生而来，然后使用与程序清单13.10相似的程序对结果进
//行测试。也就是说，它应该使用ABC指针数组，并让用户决定要创建的对象类型，在类定义中添加virtual View()方法以
//处理数据显示。
//#include "dma.h"
//#include <string>
//
//const int LABLE = 4;
//
//int main(void)
//{
//	char templab[] = {0};
//	char temprat;
//	char kind;
//	char tempcol[] = {0};
//	char tempsty[] = {0};
//	baseDMA_ABC* p_lable[LABLE];
//
//	for (int i = 0; i < LABLE; i++)
//	{
//		cout << "Please enter lable: ";
//		cin.getline(templab, 20);
//		cout << "Please enter rating: ";
//		cin >> temprat;
//		cout << "Enter 1 for lacks_DMA or 2 for has_DMA: ";
//		while (cin >> kind && (kind != '1' && kind != '2'))
//			cout << "Enter either 1 or 2: ";
//		/*while (cin.get() != '\n')
//			continue;*/
//		if (kind == '1')
//		{
//			cout << "Enter color: ";
//			cin.getline(tempcol, 20);
//			p_lable[i] = new lacksDMA(templab, temprat, tempcol);
//		}
//		else
//		{
//			while (cin.get() != '\n')
//				continue;
//			cout << "Enter style: ";
//			cin.getline(tempsty, 20);
//			p_lable[i] = new hasDMA(templab, temprat, tempsty);
//		}
//		while (cin.get() != '\n')
//			continue;
//	}
//
//	for (int i = 0; i < LABLE; i++)
//		p_lable[i]->View();
//
//	for (int i = 0; i < LABLE; i++)
//		delete p_lable[i];
//
//	return 0;
//}