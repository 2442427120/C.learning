//5.Mat��Pat���������ǵ��������μ��ɶԣ������16�±����ϰ8����������������ϣ������ʹ���ļ�������������дһ
//�������������ĳ���
//	* ���ı��ļ�mat.dat�ж�ȡMat���ѵ���������������ÿ��Ϊһ�����ѡ����������洢��������Ȼ��˳����ʾ������
//	* ���ı��ļ�pat.dat�ж�ȡPat���ѵ���������������ÿ��Ϊһ�����ѡ����������洢��������Ȼ��˳����ʾ������
//	* �ϲ������嵥��ɾ���ظ�����Ŀ����������������ļ�matnpat.dat�У�����ÿ��Ϊһ�����ѡ�
//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//#include <set>
//#include <string>
//
//using namespace std;
//
//const char* filemat = "mat.dat";
//const char* filepat = "pat.dat";
//const char* filematnpat = "matnpat.dat";
//
//int main(void)
//{
//	ifstream fmat(filemat, ios::in);
//	ifstream fpat(filepat, ios::in);
//	ofstream fmnp(filematnpat, ios::out);
//	set<string> Mat, Pat, Guest;
//	string name;
//	//��mat.dat�ж�ȡ���ݣ�����˳����ʾ
//	cout << "Mat's friend:\n";
//	while (getline(fmat, name))
//		Mat.insert(name);
//	for (auto pm = Mat.begin(); pm != Mat.end(); pm++)
//		cout << *pm << endl;
//	//��pat.dat�ж�ȡ���ݣ���˳����ʾ
//	cout << "Pat's friend:\n";
//	while (getline(fpat, name))
//		Pat.insert(name);
//	for (auto pd = Pat.begin(); pd != Pat.end(); pd++)
//		cout << *pd << endl;
//
//	Guest.insert(Mat.begin(), Mat.end());
//	Guest.insert(Pat.begin(), Pat.end());
//	for (auto pg = Guest.begin(); pg != Guest.end(); pg++)
//		fmnp << *pg << endl;
//
//	return 0;
//}