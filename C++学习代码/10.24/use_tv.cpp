//��C++ Primer Plus����ʮ���±����ϰ��1��
//1.��Tv��Remote���������޸�:
// a. �����ǻ�Ϊ��Ԫ��
// b. ��Remote�������һ��״̬��Ա�������ó�Ա����ң�����Ǵ��ڳ���ģʽ���ǻ���ģʽ��
// c. ��Remote�����һ����ʾģʽ�ķ�����
// d. ��Tv�������һ����Remote���³�Ա�����л��ķ������÷�������Tv���ڴ�״̬ʱ�������С���дһ��С��������
// ����Щ��������

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
	
	//ͨ�����ӽ�ң������״̬�л�
	s42.set_remote_state(grey);
	cout << "After switch remote's state:\n";
	grey.show_state();

	cout << "---------------------------------\n";
	Tv s58(Tv::On);	//�����ܹ�����On����Ϊ��Tv����enum { Off, On }����Ϊ�˹��г�Ա����������Ϊ˽�����޷�����
	s58.set_mode();
	grey.set_chan(s58, 28);
	cout << "\n58\" settings:\n";
	s58.settings();

	return 0;
}