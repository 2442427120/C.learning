//9.��������飬����������Ӻ�ɾ��Ԫ�ظ����ף��������ٶȸ��������������һ�ֿ����ԣ������ʹ�������㷨��
//�����򣬽������Ƶ������У���������������ٽ������Ľ�����Ƶ������е��ٶȿ��ܸ��죬����Ҳ����ռ��
//������ڴ档��ʹ�����·��������������衣
//a. ��������vector<int>����vi0����ʹ��rand()�����ṩ��ʼֵ��
//b. ����vector<int>����vi��list<int>����li�����ǵĳ��Ⱥͳ�ʼֵ����vi0��ͬ��
//c. ����ʹ��STL�㷨sort()��vi�������������ʱ�䣬�ټ���ʹ��list�ķ���sort()��li�������������ʱ�䡣
//d. ��li����Ϊ�����vi0�����ݣ�������ִ�����²��������ʱ�䣺��li�����ݸ��Ƶ�vi�У���vi�������򣬲�����
//   �����Ƶ�li�С�
//Ҫ������Щ���������ʱ�䣬��ʹ��ctime���е�clock()����������嵥5.14��ʾ�ģ���ʹ��������������ȡʱ��:
//  clock_t start = clock();
// ���ڲ���������ʹ��������������ȡ�����೤ʱ��:
//	clock_t end = clock();
//	cout << (double)(end - start)
//���ֲ��Բ��Ǿ��Կɿ�����Ϊ���ȡ���ںܶ����أ�������ڴ������Ƿ�֧�ֶദ���Լ����飨�б��ĳ���(����Ҫ
//�����Ԫ�������ӣ�����������б��Ч�ʽ�������)�����⣬����������ṩ��Ĭ�����ɷ�ʽ�ͷ������ɷ�ʽ����ʹ
//�÷������ɷ�ʽ�����ڵ����������ٶȷǳ��죬Ҫ���������Ľ����������Ҫʹ�þ����ܴ�����顣���磬�ɳ�
//�԰���100000��1000000��10000000��Ԫ�ء�
//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//
//int main(void)
//{
//	srand((unsigned int)time(0));
//	vector<int> vi0;
//	vector<int> vi;
//	list<int> li;
//
//	for (int i = 0; i < 10000000; i++)
//		vi0.push_back(rand());
//
//	//��vi0�����ݷֱ����Ƶ�vi��li��
//	copy(vi0.begin(), vi0.end(), insert_iterator<vector<int>>(vi, vi.begin()));
//	copy(vi0.begin(), vi0.end(), insert_iterator<list<int>>(li, li.begin()));
//
//	//����STLsort()�㷨��ʱ��
//	clock_t vi_sort_start = clock();
//	sort(vi.begin(), vi.end());
//	clock_t vi_sort_end = clock();
//	cout << "vi sort time = " << (double)(vi_sort_end - vi_sort_start) / CLOCKS_PER_SEC << endl;
//	//����list�ķ���sort()��ʱ��
//	clock_t li_sort_start = clock();
//	li.sort();
//	clock_t li_sort_end = clock();
//	cout << "li sort time = " << (double)(li_sort_end - li_sort_start) / CLOCKS_PER_SEC << endl;
//
//	//��li�����ݸ��Ƶ�vi�У���vi������������ٸ��Ƶ�li��
//	clock_t start = clock();
//	copy(li.begin(), li.end(), insert_iterator<vector<int>>(vi, vi.end()));
//	sort(vi.begin(), vi.end());
//	copy(vi.begin(), vi.end(), insert_iterator<list<int>>(li, li.begin()));
//	clock_t end = clock();
//	cout << "li copy to vi and sort and copy in li time = " << (double)(end - start) / CLOCKS_PER_SEC << endl;
//
//	return 0;
//}