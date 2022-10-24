//1.RTTI��dynamic_cast���÷�

//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//class Grand
//{
//private:
//	int hold;
//public:
//	Grand(int h = 0) : hold(h) {}
//	virtual void Speak() const { cout << "I am a grand class!\n"; }
//	virtual int Value() const { return hold; }
//};
//
//class Superb : public Grand
//{
//public:
//	Superb(int h = 0) : Grand(h) {}
//	void Speak() const { cout << "I am a superb class!\n"; }
//	virtual void Say() const { cout << "I hold the superb value of " << Value() << "!\n"; }
//};
//
//class Magnificent : public Superb
//{
//private:
//	char ch;
//public:
//	Magnificent(int h = 0, char c = 'A') : Superb(h), ch(c) {}
//	void Speak() const { cout << "I am a magnificent class!!!\n"; }
//	void Say() const { cout << "I hold the character " << ch << " and the integer " << Value() << "!\n"; }
//};
//
//Grand* GetOne();
//
//int main(void)
//{
//	srand((unsigned int)time(0));
//	Grand* pg;
//	Superb* ps;
//
//	for (int i = 0; i < 5; i++)
//	{
//		pg = GetOne();
//		pg->Speak();
//		//pg�Ƿ����ת��ΪSuperb*��������ԣ�����pg�ĵ�ַ��Ȼ��psָ��pg�ĵ�ַ�����򷵻�һ����ָ�롣
//		//psΪ�ڶ�����Superb��ָ�룬����ڵ�һ����GrandΪ�����࣬����ڵ�������MagnificentΪ���࣬��ˣ�ps
//		//����ָ��Superb����Ҳ����ָ��Magnificent���󣬵��޷�ָ��Grand()����ָ��ɹ�ʱ�᷵��ָ������
//		//��ַ����ָ�򲻳ɹ�ʱ�᷵�ؿ�ָ�롣
//		if (ps = dynamic_cast<Superb*>(pg))	
//		//ps = (Superb*)pg;	//������ʹ�ã�ֻҪpgΪ��һ����Grand���ͻᷢ���δ��󣬵��³����޷�����
//		ps->Say();
//	}
//
//	return 0;
//}
//
//Grand* GetOne()
//{
//	Grand* p = new Grand();	//Ϊpָ���ʼ��
//
//	switch (rand() % 3)
//	{
//	case 0:
//		p = new Grand(rand() % 100);
//		break;
//	case 1:
//		p = new Superb(rand() % 100);
//		break;
//	case 2:
//		p = new Magnificent(rand() % 100, 'A' + rand() % 26);
//		break;
//	}
//
//	return p;
//}