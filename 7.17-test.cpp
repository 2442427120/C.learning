#include <iostream>
#include <string>
#include <vector>
#include <array>

//编写一个程序，让用户输入三次40码跑的成绩(如果你愿意，也可以让用户输入40米跑的成绩)，并显示次数和平均成绩
//。请使用一个array对象来存储数据。
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

//完成编程练习6，但使用new来动态分配数组，而不是声明一个包含3个元素的CandyBar数组。
struct CandyBar
{
	char brand[20];
	double weight;
	int calories;
};

int main(void)
{
	using namespace std;

	CandyBar* sugar = new CandyBar[3];	//指向含有三个元素的结构数组的指针
	sugar[0] = {"彩虹糖", 26.9, 50};
	sugar[1] = {"棉花糖", 2.5, 32};
	sugar[2] = {"软糖", 18.6, 60};

	cout << "第一种" << endl;
	cout << "品牌：" <<  sugar[0].brand << endl;
	cout << "重量: " << sugar[0].weight << endl;
	cout << "卡路里: " << sugar[0].calories << endl;

	cout << "第二种" << endl;
	cout << "品牌：" << sugar[1].brand << endl;
	cout << "重量: " << sugar[1].weight << endl;
	cout << "卡路里: " << sugar[1].calories << endl;

	cout << "第三种" << endl;
	cout << "品牌：" << sugar[2].brand << endl;
	cout << "重量: " << sugar[2].weight << endl;
	cout << "卡路里: " << sugar[2].calories << endl;

    delete [] sugar;
 
	return 0;
}

//完成编程练习7，但使用new来为结构分配内存，而不是声明一个结构变量。另外，让程序在请求输入披萨公司名称之前
//输入披萨饼的直径。
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
//	cout << "Enter Pizaa diamter：";
//	cin >> pt->diameter;
//	cin.get();	//读取换行 - 输入完披萨的尺寸后缓冲区会有一个换行，不读取将会导致getline读取到这个换行
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