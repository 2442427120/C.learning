////1.���������������
////class Cow
////{	
////	private:
////		char name[20];
////		char* hobby;
////		double weight;
////	public:
////		Cow();
////		Cow(const char* nm, const char* ho, double wt);
////		Cow(const Cow& c);	
////		~Cow();
////		Cow& operator=(const Cow& c);
////		void ShowCow() const;
//// };
//// ��������ṩʵ�֣�����дһ��ʹ�����г�Ա������С����
//#include "cow.h"
//
//void callme(Cow c);
//
//int main(void)
//{
//	Cow cow1("black", "apple", 255);
//	cow1.ShowCow();
//
//	Cow cow2;
//	cow2.ShowCow();
//
//	Cow cow3("white", "banana", 365);
//	cow3.ShowCow();
//	Cow cow4 = cow3;
//	cow4.ShowCow();
//
//	callme(cow4);
//
//	return 0;
//}
//
//void callme(Cow c)
//{
//	c.ShowCow();
//}