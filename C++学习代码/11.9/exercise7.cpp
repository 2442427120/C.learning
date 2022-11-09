//7.��Ʊ����һ����������Ϸ����Ƭ���Ǵ���ŵ�ԭ�㣬����һЩԲ�㱻���ѡ�С���дһ��Lotto()������������������
//����һ�������ǲ�Ʊ�ϵ�Բ��ĸ������ڶ������������ѡ���Բ��������ú�������һ��vector<int>�������а���
//(�����к��˳��)���ѡ��ĺ��롣���磬��������ʹ�øú���:
//	vector<int> winners;
//	winners = Lotto(51, 6);
//��������һ��ʸ������winner����ʸ������1-51�����ѡ����6�����֡�ע�⣬����ʹ��rand()�޷����������������
//�������ظ���ֵ��
//	��ʾ���ú�������һ���������п���ֵ��ʸ����ʹ��random_shuffle(),Ȼ��ͨ�����Һ��ʸ���ĵ�һ��ֵ����ȡֵ��
//��дһ��С�������������������
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

vector<int> Lotto(int total, int sum);
void outint(int n);

int main(void)
{
	srand((unsigned int)time(0));	//random_shuffle()��rand()�����������Ҫ�����������������ӡ�
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
	//��1-51�����������vact��
	for (int i = 0; i < 51; i++)
		vect.push_back(i + 1);
	//��vect���������
	random_shuffle(vect.begin(), vect.end());
	//��vect��ǰ6��Ԫ�ؼ���temp��
	temp.insert(temp.begin(), vect.begin(), vect.begin() + 6);
	sort(temp.begin(), temp.end());	//����

	return temp;
}

void outint(int n)
{
	cout << n << " ";
}