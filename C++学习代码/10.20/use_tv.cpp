//1.��Tv���Remote���У�ʵ����ֱ�ӷ���Tv��Ա��Remote������Remote::set_chan()������������������ֱ�ӷ��ʣ����
//���轫����Remote����Ϊ��Ԫ�ֻ࣬�轫set_chan()��������Ϊ��Ԫ�������ɡ�������������ѭ�������������Ҫǰ��
//���������������
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
//	Tv s58(Tv::On);	//�����ܹ�����On����Ϊ��Tv����enum { Off, On }����Ϊ�˹��г�Ա����������Ϊ˽�����޷�����
//	s58.set_mode();
//	grey.set_chan(s58, 28);
//	cout << "\n58\" settings:\n";
//	s58.settings();
//
//	return 0;
//}