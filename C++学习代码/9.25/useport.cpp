//4.Benvolent Order of Programmers����ά��ƿװ���Ѿ��䡣Ϊ��������BOP Portmaster������һ��Port�࣬������
//���£�
//#include <iostream>
//using namespace std;
//
//class Port
//{
//private:
//	char* brand;
//	char style[20];	//i.e, tawny, ruby, vintage
//	int bottles;
//public:
//	Port(const char* br = "none", const char* st = "none", int b = 0);
//	Port(const Port& p);
//	virtual ~Port() { delete[]brand; }
//	Port& operator=(const Port& p);
//	Port& operator+=(int b);	//add b to bottles
//	Port& operator-=(int b);	//subracts b from bottles, if avaliable
//	int BottleCount() const { return bottles; }
//	virtual void Show() const;
//	friend ostream& operator<<(ostream& os, const Port& p);
//};
//Show()����������ĸ�ʽ��ʾ��Ϣ��
// Brand: Gallo
// Kind: tawny
// Bottles: 20
//operator<<()����������ĸ�ʽ��ʾ��Ϣ��ĩβû�л��з���
// Gallo, tawny, 20
// PortMaster�����Port��ķ��������������VintagePort�࣬Ȼ�󱻽�ְ----��Ϊ��С�Ľ�һƿ45��Cockburn�õ�
// ������׼��������ϵ������ϣ�VintagePort��������ʾ��
//class VintagePort : public Port
//{
//private:
//	char* nickname;
//	int year;
//public:
//	VintagePort();
//	VintagePort(const char* br, int b, const char* nn, int y);
//	VintagePort(const VintagePort& vp);
//	~VintagePort() { delete[]nickname; }
//	VintagePort& operator=(const VintagePort& vp);
//	void Show() const;
//	friend ostream& operator<<(ostream& os, const VintagePort& vp);
//};
//����ָ���������VintagerPort��
// a.��һ�����������´���Port�������壬��Ϊǰ�α������������˶��巽��
// b.�ڶ��������ǽ���Ϊʲô�еķ������¶����ˣ�����Щû�����¶���
// c.�����������ǽ���Ϊ��û�н�operator=()��operator<<()����Ϊ���
// d.���ĸ��������ṩVintagePort�и��������Ķ��塣
//#include "port.h"
//
//int main(void)
//{
//
//	return 0;
//}