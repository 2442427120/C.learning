// 2.��������Cpmv��������
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
// ����operator+Ӧ����һ���������Աqcode��zcode�в���������Ӧ��Աƴ�Ӷ��ɡ����ṩΪ�ƶ����캯�����ƶ���
// ֵ�����ʵ���ƶ�����Ĵ��롣��дһ������ʹ��������Щ�����ĳ���Ϊ������ԣ��ø�����������ʾ�ض������ݣ�
// �Ա�ֱ�����Ǳ����á�
//#include "cpmv.h"
//
//int main(void)
//{
//	Cpmv cp1("hello", "world");
//	cp1.Display();
//
//	Cpmv cp2(cp1);	//���ø�ֵ���캯��
//	cp2.Display();	
//	Cpmv cp3(cp1 + cp2); //�����ƶ���ֵ���캯�������ص�+�����
//	cp3.Display();
//
//	Cpmv cp4;
//	cp4 = cp3;	//���ø�ֵ�����
//	cp4.Display();
//
//	Cpmv cp5;
//	cp5 = cp1 + cp2;	//�����ƶ���ֵ�����
//	cp5.Display();
//
//	return 0;
//}