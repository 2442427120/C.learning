//1.RTTI中dynamic_cast的用法

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
//		//pg是否可以转换为Superb*，如果可以，返回pg的地址，然后将ps指向pg的地址，否则返回一个空指针。
//		//ps为第二代类Superb的指针，相对于第一代类Grand为派生类，相对于第三代类Magnificent为基类，因此，ps
//		//可以指向Superb对象，也可以指向Magnificent对象，但无法指向Grand()对象，指向成功时会返回指向对象的
//		//地址，而指向不成功时会返回空指针。
//		if (ps = dynamic_cast<Superb*>(pg))	
//		//ps = (Superb*)pg;	//若这样使用，只要pg为第一代类Grand，就会发生段错误，导致程序无法运行
//		ps->Say();
//	}
//
//	return 0;
//}
//
//Grand* GetOne()
//{
//	Grand* p = new Grand();	//为p指针初始化
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