//1.在Tv类和Remote类中，实际上直接访问Tv成员的Remote方法是Remote::set_chan()方法，其他方法都不直接访问，因此
//无需将整个Remote声明为友元类，只需将set_chan()方法声明为友元函数即可。但由于两个类循环依赖，因此需要前置
//声明来解决此问题
//#include "tv.h"
//
//int main(void)
//{
//	Tv s42;
//	cout << "Initial setting for 42\" TV:\n";
//	s42.settings();
//	s42.onoff();
//	s42.chanup();
//	s42.settings();
//
//	Remote grey;
//
//	grey.set_chan(s42, 10);
//	grey.volup(s42);
//	grey.volup(s42);
//	cout << "\n42\" settings after using remote:\n";
//	s42.settings();
//
//	Tv s58(Tv::On);	//参数能够传递On是因为在Tv类中enum { Off, On }设置为了公有成员，若是设置为私有则无法访问
//	s58.set_mode();
//	grey.set_chan(s58, 28);
//	cout << "\n58\" settings:\n";
//	s58.settings();
//
//	return 0;
//}