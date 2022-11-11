////��C++ Primer Plus����ʮ���±����ϰ��10���޸�
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>	//ʹ��for_each����Ҫ������ͷ�ļ�
//#include <memory>
//
//using namespace std;
//
//struct Review
//{
//	string title;
//	int rating;
//	double price;
//};
//
//enum { EXIT, ORIGINAL, TITLE_ASC, RATING_ASC, RATING_DES, PRICE_ASC, PRICE_DES };
//
//bool FillReview(Review& r);
//void ShowReview(const shared_ptr<Review>& spr);
//
//bool WorseThan(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2);
////bool BetterThan(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2);
//bool CheapThan(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2);
////bool ExpensiveThan(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2);
//
//const int SIZE = 5;
//
//int main(void)
//{
//	int choice;
//	vector<shared_ptr<Review>> books;
//	Review temp;
//	while (FillReview(temp))
//	{
//		shared_ptr<Review> spr(new Review(temp));
//		books.push_back(spr);
//	}	//������Ԫ�ط���books������
//
//
//	cout << "---------------------------------------------------\n";
//	cout << "enter 1: Original order display;\n";
//	cout << "enter 2: Displayed in alphabetical order;\n";
//	cout << "enter 3: Listed in ascending oredr by book rating;\n";
//	cout << "enter 4; Listed in descending order by book rating;\n";
//	cout << "enter 5: Listed in ascending order by book price;\n";
//	cout << "enter 6: Listed in descending order by book price;\n";
//	cout << "---------------------------------------------------\n";
//	cout << "Please enter your choice (0 to quit):\n";
//	while (cin >> choice && choice != 0)
//	{
//		switch (choice)
//		{
//		case ORIGINAL:
//			cout << "Original order display:\n";
//			break;
//		case TITLE_ASC:
//			cout << "Displayed in alphabetical order:\n";
//			sort(books.begin(), books.end());
//			break;
//		case RATING_ASC:
//			cout << "Listed in ascending oredr by book rating:\n";
//			sort(books.begin(), books.end(), WorseThan);
//			break;
//		case RATING_DES:
//			cout << "Listed in descending oredr by book rating:\n";
//			sort(books.rbegin(), books.rend(), WorseThan); //����������������ݡ���WorseThan�����е�����
//														   //��ʽ��ת��
//			break;
//		case PRICE_ASC:
//			cout << "Listed in ascending order by book price:\n";
//			sort(books.begin(), books.end(), CheapThan);
//			break;
//		case PRICE_DES:
//			cout << "Listed in descending order by book price:\n";
//			sort(books.rbegin(), books.rend(), CheapThan);
//			break;
//		case EXIT:
//			break;
//		default:
//			cout << "Invaild input, enter again: ";
//			break;
//		}
//		cout << "rating:\ttitle\tprice:\n";
//		for_each(books.begin(), books.end(), ShowReview);
//		cout << "Please enter your choice (0 to quit):\n";
//	}
//
//	return 0;
//}
//
//bool FillReview(Review& r)
//{
//	cout << "Enter book title (quit to quit): ";
//	getline(cin, r.title);
//	//�ж������Ƿ�Ϊquit
//	if (r.title == "quit")
//		return false;
//	cout << "Enter book rating: ";
//	cin >> r.rating;
//	//����Ƿ�ʱ����������
//	if (!cin)
//		return false;
//	cout << "Enter book price: ";
//	cin >> r.price;
//	if (!cin)
//		return false;
//	//������Ļ�������
//	while (cin.get() != '\n');
//
//	return true;
//}
//
//void ShowReview(const shared_ptr<Review>& spr)
//{
//	cout << spr->rating << "\t" << spr->title << "\t" << spr->price << endl;
//}
//
////bool operator<(const Review& r1, const Review& r2)
////{
////	if (r1.title < r2.title)
////		return true;
////	else if (r1.title == r2.title && r1.rating < r2.rating)
////		return true;
////	else
////		return false;
////}
//
////����ĸ˳������
//bool operator<(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2)
//{
//	if (spr1->title < spr2->title)
//		return true;
//	else if (spr1->title == spr2->title && spr1->rating < spr1->rating)
//		return true;
//	else if (spr1->title == spr2->title && spr1->rating == spr2->rating && spr1->price < spr2->price)
//		return true;
//	else
//		return false;
//}
//
////��������������
//bool WorseThan(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2)
//{
//	if (spr1->rating < spr2->rating)
//		return true;
//	else if (spr1->rating == spr2->rating && spr1->title < spr2->title)
//		return true;
//	else if (spr1->rating == spr2->rating && spr1->title == spr2->title && spr1->price < spr2->price)
//		return true;
//	else
//		return false;
//}
//
////��������������
////bool BetterThan(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2)
////{
////	if (spr1->rating > spr2->rating)
////		return true;
////	else if (spr1->rating == spr2->rating && spr1->title > spr2->title)
////		return true;
////	else if (spr1->rating == spr2->rating && spr1->title == spr2->title && spr1->price > spr2->price)
////		return true;
////	else
////		return false;
////}
//
////���۸���������
//bool CheapThan(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2)
//{
//	if (spr1->price < spr2->price)
//		return true;
//	else if (spr1->price == spr2->price && spr1->title < spr2->title)
//		return true;
//	else if (spr1->price == spr2->price && spr1->title == spr2->title && spr1->rating < spr2->rating)
//		return true;
//	else
//		return false;
//}
//
////���۸�������
////bool ExpensiveThan(const shared_ptr<Review>& spr1, const shared_ptr<Review>& spr2)
////{
////	if (spr1->price > spr2->price)
////		return true;
////	else if (spr1->price == spr2->price && spr1->title > spr2->title)
////		return true;
////	else if (spr1->price == spr2->price && spr1->title == spr2->title && spr1->rating > spr2->rating)
////		return true;
////	else
////		return false;
////}