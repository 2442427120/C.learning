//��ʾ���ʺ�ʹ��auto_ptr��ʾ��
//#include <iostream>
//#include <string>
//#include <memory>
//
//using namespace std;
//
//int main(void)
//{
//	//����auto_ptr����ָ��
//	/*auto_ptr<string> films[5] =
//	{
//		auto_ptr<string>(new string("ABC")),
//		auto_ptr<string>(new string("DEF")),
//		auto_ptr<string>(new string("HIJ")),
//		auto_ptr<string>(new string("KLM")),
//		auto_ptr<string>(new string("OPQ"))
//	};*/
//	//����shared_ptr����ָ�룬���ͷŴ������ڴ�ռ�ʱ�����ü��������ᵼ����auto_ptr�����Ķδ���
//	shared_ptr<string> films[5] =
//	{
//		shared_ptr<string>(new string("ABC")),
//		shared_ptr<string>(new string("DEF")),
//		shared_ptr<string>(new string("HIJ")),
//		shared_ptr<string>(new string("KLM")),
//		shared_ptr<string>(new string("OPQ"))
//	};
//
//	//auto_ptr<string> pwin;
//	shared_ptr<string> pwin;
//	pwin = films[2];	//��films[2]������Ȩ����pwin
//
//	for (int i = 0; i < 5; i++)
//		cout << *films[i] << endl;
//	cout << *pwin << endl;
//
//	return 0;
//}
