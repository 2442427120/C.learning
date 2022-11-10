//10.�밴���·�ʽ�޸ĳ����嵥16.9(vect3.cpp)��
//a. �ڽṹReview������³�Աprice��
//b. ��ʹ��vector<Review>���洢���룬��ʹ��vector<shared_ptr<Review>>�������ˣ�����ʹ��new���ص�ָ������
//ʼ��shared_ptr.
//c. ������׶ν�����ʹ��һ��ѭ�����û�ѡ�����·�ʽ֮һ��ʾ�鼮����ԭʼ˳����ʾ������ĸ��˳����ʾ������
//��������ʾ��������������ʾ�����۸�������ʾ�����۸�����ʾ���˳���
//������һ�ֿ��ܵĽ����������ȡ������ٴ���һ��shared_ptrʸ������ʹ��ԭʼ�����ʼ����������һ����ָ��
//�ṹ��ָ����бȽϵ�operator<()��������ʹ�����Եڶ���ʸ���������������е�shared_ptr������ָ��Ķ�����
//�����������ظ��������̣�������rating��price�����shared_ptrʸ������ע�⣬ͨ��ʹ��rbegin()��rend()����
//���ⴴ�����෴��˳�����е�shared_prtʸ����
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>	//ʹ��for_each����Ҫ������ͷ�ļ�
#include <memory>

using namespace std;

struct Review
{
	string title;
	int rating;
	double price;
};

enum { EXIT, ORIGINAL, TITLE_ASC, RATING_ASC, RATING_DES, PRICE_ASC, PRICE_DES };

bool FillReview(Review& r);
void ShowReview(const shared_ptr<Review>& spr);

bool WorseThan(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2);
bool BetterThan(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2);
bool CheapThan(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2);
bool ExpensiveThan(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2);

const int SIZE = 5;

int main(void)
{
	int choice;
	vector<shared_ptr<Review>> books;
	Review temp;
	while (FillReview(temp))
	{
		shared_ptr<Review> spr(new Review(temp));
		books.push_back(spr);
	}	//������Ԫ�ط���books������


	cout << "---------------------------------------------------\n";
	cout << "enter 1: Original order display;\n";
	cout << "enter 2: Displayed in alphabetical order;\n";
	cout << "enter 3: Listed in ascending oredr by book rating;\n";
	cout << "enter 4; Listed in descending order by book rating;\n";
	cout << "enter 5: Listed in ascending order by book price;\n";
	cout << "enter 6: Listed in descending order by book price;\n";
	cout << "---------------------------------------------------\n";
	cout << "Please enter your choice (0 to quit):\n";
	while (cin >> choice && choice != 0)
	{
		switch (choice)
		{
		case ORIGINAL:
			cout << "Original order display:\n";
			break;
		case TITLE_ASC:
			cout << "Displayed in alphabetical order:\n";
			sort(books.begin(), books.end());
			break;
		case RATING_ASC:
			cout << "Listed in ascending oredr by book rating:\n";
			sort(books.begin(), books.end(), WorseThan);
			break;
		case RATING_DES:
			cout << "Listed in descending oredr by book rating:\n";
			sort(books.begin(), books.end(), BetterThan);
			break;
		case PRICE_ASC:
			cout << "Listed in ascending order by book price:\n";
			sort(books.begin(), books.end(), CheapThan);
			break;
		case PRICE_DES:
			cout << "Listed in descending order by book price:\n";
			sort(books.begin(), books.end(), ExpensiveThan);
			break;
		case EXIT:
			break;
		default:
			cout << "Invaild input, enter again: ";
			break;
		}
		cout << "rating:\ttitle\tprice:\n";
		for_each(books.begin(), books.end(), ShowReview);
		cout << "Please enter your choice (0 to quit):\n";
	}

	//int num = books.size();
	//if (num > 0)
	//{
	//	cout << "Thank you. You entered the following:\n"
	//		<< "Rating\tBook\n";
	//	//������ķ�ʽ����books�������
	//	/*for (int i = 0; i < num; i++)
	//		ShowReview(books[i]);*/
	//	for_each(books.begin(), books.end(), ShowReview);

	//	//�Ե������ķ�ʽ����books�������
	//	cout << "Reprising:\n"
	//		<< "Rating\tBook\n";
	//	vector<Review>::iterator pr;	//����һ��Review�ĵ�����
	//	/*for (pr = books.begin(); pr != books.end(); pr++)
	//		ShowReview(*pr);*/
	//	//for_each()�������÷�
	//	for_each(books.begin(), books.end(), ShowReview);

	//	vector<Review> oldlist(books);	//ʹ�ø�ֵ���캯��
	//	if (num > 3)
	//	{
	//		//erase()������ɾ��ѡ�з�Χ�ڵ�Ԫ�أ���Ҫ������������
	//		//��һ�������ǿ�ʼλ�ã��ڶ��������ǽ���λ�ã���ɾ��������������λ�ã�ֻɾ���Ӹտ�ʼλ�õ�����
	//		//λ��ǰһ��λ�õ�����Ԫ�ء�
	//		books.erase(books.begin() + 1, books.begin() + 3);
	//		cout << "After eraseure:\n";
	//		/*for (pr = books.begin(); pr != books.end(); pr++)
	//			ShowReview(*pr);*/
	//		for_each(books.begin(), books.end(), ShowReview);

	//		//insert()��������ָ��λ�ÿ�ʼ����ѡ�з�Χ�ڵ�Ԫ�أ���Ҫ����3������
	//		//��һ��������ָ��Ҫ����Ԫ�ص�λ�ã��ڶ��������Ǵ����￪ʼȡ�������������ǵ��������������Ľ�
	//		//��Ҳ�ǽ���λ�õ�ǰһ��Ԫ�ء�
	//		books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
	//		cout << "After insertion:\n";
	//		/*for (pr = books.begin(); pr != books.end(); pr++)
	//			ShowReview(*pr);*/
	//		for_each(books.begin(), books.end(), ShowReview);
	//	}
	//	//swap()���������������������ݣ���oldlist���Ԫ�غ�books�����ݽ�����
	//	books.swap(oldlist);
	//	//������boos�е�����
	//	cout << "Swapping oldlist with books:\n";
	//	/*for (pr = books.begin(); pr != books.end(); pr++)
	//		ShowReview(*pr);*/
	//	for_each(books.begin(), books.end(), ShowReview);

	//	//������oldlist�е�����
	//	cout << "oldlist content:\n";
	//	/*for (pr = oldlist.begin(); pr != oldlist.end(); pr++)
	//		ShowReview(*pr);*/
	//	for_each(oldlist.begin(), oldlist.end(), ShowReview);

	//	//random_shuffle()�������÷�
	//	cout << "After shuffle:\nRating\tBook\n";
	//	random_shuffle(books.begin(), books.end());
	//	for_each(books.begin(), books.end(), ShowReview);

	//	//sort()�����ĵ�һ�ְ汾���Ƚ��ַ�������
	//	cout << "Sorted by titel:\nRating\tBook\n";
	//	sort(books.begin(), books.end());
	//	for_each(books.begin(), books.end(), ShowReview);

	//	//sort()�����ĵڶ��ְ汾���Ƚ�rating
	//	cout << "Sorted by rating:\nRating\tBook\n";
	//	sort(books.begin(), books.end(), WorseThan);
	//	for_each(books.begin(), books.end(), ShowReview);
	//}
	//else
	//	cout << "Nothing entered, nothing gained.\n";

	return 0;
}

bool FillReview(Review& r)
{
	cout << "Enter book title (quit to quit): ";
	getline(cin, r.title);
	//�ж������Ƿ�Ϊquit
	if (r.title == "quit")
		return false;
	cout << "Enter book rating: ";
	cin >> r.rating;
	//����Ƿ�ʱ����������
	if (!cin)
		return false;
	cout << "Enter book price: ";
	cin >> r.price;
	if (!cin)
		return false;
	//������Ļ�������
	while (cin.get() != '\n');

	return true;
}
//shared_ptr<Review> FillReview()
//{
//	shared_ptr<Review> temp(new Review);
//
//	cout << "Enter book title (quit to quit): ";
//	getline(cin, temp->title);
//	//�ж������Ƿ�Ϊquit
//	/*if (temp->title == "quit")
//		return temp;*/
//	cout << "Enter book rating: ";
//	cin >> temp->rating;
//	cout << "Enter book price: ";
//	cin >> temp->price;
//	//����Ƿ�ʱ����������
//	if (!cin)
//		return temp;
//	//������Ļ�������
//	while (cin.get() != '\n');
//	
//	return temp;
//}

void ShowReview(const shared_ptr<Review>& spr)
{
	cout << spr->rating << "\t" << spr->title << "\t" << spr->price << endl;
}

//bool operator<(const Review& r1, const Review& r2)
//{
//	if (r1.title < r2.title)
//		return true;
//	else if (r1.title == r2.title && r1.rating < r2.rating)
//		return true;
//	else
//		return false;
//}

//����ĸ˳������
bool operator<(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2)
{
	if (spr1->title < spr2->title)
		return true;
	else if (spr1->title == spr2->title && spr1->rating < spr1->rating)
		return true;
	else if (spr1->title == spr2->title && spr1->rating == spr2->rating && spr1->price < spr2->price)
		return true;
	else
		return false;
}

//��������������
bool WorseThan(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2)
{
	if (spr1->rating < spr2->rating)
		return true;
	else if (spr1->rating == spr2->rating && spr1->title < spr2->title)
		return true;
	else if (spr1->rating == spr2->rating && spr1->title == spr2->title && spr1->price < spr2->price)
		return true;
	else
		return false;
}

//��������������
bool BetterThan(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2)
{
	if (spr1->rating > spr2->rating)
		return true;
	else if (spr1->rating == spr2->rating && spr1->title > spr2->title)
		return true;
	else if (spr1->rating == spr2->rating && spr1->title == spr2->title && spr1->price > spr2->price)
		return true;
	else
		return false;
}

//���۸���������
bool CheapThan(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2)
{
	if (spr1->price < spr2->price)
		return true;
	else if (spr1->price == spr2->price && spr1->title < spr2->title)
		return true;
	else if (spr1->price == spr2->price && spr1->title == spr2->title && spr1->rating < spr2->rating)
		return true;
	else
		return false;
}

//���۸�������
bool ExpensiveThan(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2)
{
	if (spr1->price > spr2->price)
		return true;
	else if (spr1->price == spr2->price && spr1->title > spr2->title)
		return true;
	else if (spr1->price == spr2->price && spr1->title == spr2->title && spr1->rating > spr2->rating)
		return true;
	else
		return false;
}
