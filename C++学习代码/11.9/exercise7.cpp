//7.彩票卡是一个常见的游戏。卡片上是带编号的原点，其中一些圆点被随机选中。编写一个Lotto()函数，它接受两个参
//。第一个参数是彩票上的圆点的个数，第二个参数是随机选择的圆点个数。该函数返回一个vector<int>对象，其中包含
//(按排列后的顺序)随机选择的号码。例如，可以这样使用该函数:
//	vector<int> winners;
//	winners = Lotto(51, 6);
//这样将把一个矢量赋给winner，该矢量包括1-51中随机选定的6个数字。注意，仅仅使用rand()无法完成这项任务，因它
//会生成重复的值。
//	提示：让函数创建一个包含所有可能值的矢量，使用random_shuffle(),然后通过打乱后的矢量的第一个值来获取值。
//编写一个小程序来测试这个函数。
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

vector<int> Lotto(int total, int sum);
void outint(int n);

int main(void)
{
	srand((unsigned int)time(0));	//random_shuffle()和rand()的随机数都需要此条语句设置随机种子。
	vector<int> winners;
	winners = Lotto(51, 6);
	for_each(winners.begin(), winners.end(), outint);
	cout << endl;

	return 0;
}

vector<int> Lotto(int total, int sum)
{
	int arr[51];
	vector<int> vect;
	vector<int> temp;
	//将1-51的数升序存入vact中
	for (int i = 0; i < 51; i++)
		vect.push_back(i + 1);
	//将vect的内容随机
	random_shuffle(vect.begin(), vect.end());
	//将vect的前6个元素加入temp中
	temp.insert(temp.begin(), vect.begin(), vect.begin() + 6);
	sort(temp.begin(), temp.end());	//排序

	return temp;
}

void outint(int n)
{
	cout << n << " ";
}