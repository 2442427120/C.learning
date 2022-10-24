//《C++ Primer Plus》第十五章编程练习第1题
//1.对Tv和Remote类做如下修改:
// a. 让它们互为友元；
// b. 在Remote类中添加一个状态成员变量，该成员描述遥控器是处于常规模式还是互动模式；
// c. 在Remote中添加一个显示模式的方法；
// d. 在Tv类中添加一个对Remote中新成员进行切换的方法，该方法仅当Tv处于打开状态时才能运行。编写一个小程序来测
// 试这些新特征。

#include "tv.h"

int main(void)
{
	Tv s42;
	cout << "Initial setting for 42\" TV:\n";
	s42.settings();
	s42.onoff();
	s42.chanup();
	s42.settings();

	Remote grey;

	grey.set_chan(s42, 10);
	grey.volup(s42);
	grey.volup(s42);
	cout << "\n42\" settings after using remote:\n";
	s42.settings();
	grey.show_state();
	
	//通过电视将遥控器的状态切换
	s42.set_remote_state(grey);
	cout << "After switch remote's state:\n";
	grey.show_state();

	cout << "---------------------------------\n";
	Tv s58(Tv::On);	//参数能够传递On是因为在Tv类中enum { Off, On }设置为了公有成员，若是设置为私有则无法访问
	s58.set_mode();
	grey.set_chan(s58, 28);
	cout << "\n58\" settings:\n";
	s58.settings();

	return 0;
}