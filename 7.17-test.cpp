#include <iostream>
#include <string>
#include <vector>
#include <array>

//��дһ���������û���������40���ܵĳɼ�(�����Ը�⣬Ҳ�������û�����40���ܵĳɼ�)������ʾ������ƽ���ɼ�
//����ʹ��һ��array�������洢���ݡ�
//int main(void)
//{
//	using namespace std;
//
//	array<double, 3> score;
//
//	cout << "Enter your first grade: ";
//	cin >> score[0];
//	cout << "Enter your second grade: ";
//	cin >> score[1];
//	cout << "Enter your third grade: ";
//	cin >> score[2];
//
//	cout << "First grade: " << score[0] << endl;
//	cout << "Second grade: " << score[1] << endl;
//	cout << "Third grade: " << score[2] << endl;
//	cout << "Averge grade: " << (score[0] + score[1] + score[2]) / 3 << endl;
//
//	return 0;
//}

//��ɱ����ϰ6����ʹ��new����̬�������飬����������һ������3��Ԫ�ص�CandyBar���顣
struct CandyBar
{
	char brand[20];
	double weight;
	int calories;
};

int main(void)
{
	using namespace std;

	CandyBar* sugar = new CandyBar[3];	//ָ��������Ԫ�صĽṹ�����ָ��
	sugar[0] = {"�ʺ���", 26.9, 50};
	sugar[1] = {"�޻���", 2.5, 32};
	sugar[2] = {"����", 18.6, 60};

	cout << "��һ��" << endl;
	cout << "Ʒ�ƣ�" <<  sugar[0].brand << endl;
	cout << "����: " << sugar[0].weight << endl;
	cout << "��·��: " << sugar[0].calories << endl;

	cout << "�ڶ���" << endl;
	cout << "Ʒ�ƣ�" << sugar[1].brand << endl;
	cout << "����: " << sugar[1].weight << endl;
	cout << "��·��: " << sugar[1].calories << endl;

	cout << "������" << endl;
	cout << "Ʒ�ƣ�" << sugar[2].brand << endl;
	cout << "����: " << sugar[2].weight << endl;
	cout << "��·��: " << sugar[2].calories << endl;

    delete [] sugar;
 
	return 0;
}

//��ɱ����ϰ7����ʹ��new��Ϊ�ṹ�����ڴ棬����������һ���ṹ���������⣬�ó�������������������˾����֮ǰ
//������������ֱ����
//struct Pizza
//{
//	char company[20];
//	int diameter;
//	double weight;
//};
//
//int main(void)
//{
//	using namespace std;
//
//	Pizza* pt = new Pizza;
//
//	cout << "Enter Pizaa diamter��";
//	cin >> pt->diameter;
//	cin.get();	//��ȡ���� - �����������ĳߴ�󻺳�������һ�����У�����ȡ���ᵼ��getline��ȡ���������
//	cout << "Enter Pizza company: ";
//	cin.getline(pt->company, 20);
//	cout << "Enter Pizza weight: ";
//	cin >> pt->weight;
//
//	cout << "Diameter: " << pt->diameter << endl;
//	cout << "Company: " << pt->company << endl;
//	cout << "weight: " << pt->weight << endl;
// 
//  delete pt;
//
//	return 0;
//}

//struct fish
//{
//	char kind[30];
//	double weight;
//};
//
//int main(void)
//{
//	using namespace std;
//
//	fish* pt = new fish;
//
//	cout << pt << endl;
//
//	return 0;
//}