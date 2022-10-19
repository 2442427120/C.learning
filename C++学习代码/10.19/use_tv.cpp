//友元类的演示
//定义一个Tv类.可以用一组状态成员来表示电视机：
// *开关
// *频道设置
// *音量设置
// *有线电视或天线调节模式
// *TV调谐或A/V输入
// 遥控器的控制能力与电视机内置的控制功能相同，它的很多方法都可以通过Tv方法来实现。
#include "Tv.h"

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

	Tv s58(Tv::On);	//参数能够传递On是因为在Tv类中enum { Off, On }设置为了公有成员，若是设置为私有则无法访问
	s58.set_mode();
	grey.set_chan(s58, 28);
	cout << "\n58\" settings:\n";
	s58.settings();

	return 0;
}