////《C++ Primer Plus》第十六章编程练习第10题修改
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>	//使用for_each等需要包含此头文件
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
//	}	//将填充的元素放入books数组中
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
//			sort(books.rbegin(), books.rend(), WorseThan); //反向迭代器排序内容。将WorseThan函数中的排序
//														   //方式反转。
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
//	//判断输入是否为quit
//	if (r.title == "quit")
//		return false;
//	cout << "Enter book rating: ";
//	cin >> r.rating;
//	//输入非法时，结束输入
//	if (!cin)
//		return false;
//	cout << "Enter book price: ";
//	cin >> r.price;
//	if (!cin)
//		return false;
//	//将多余的换行消除
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
////按字母顺序排列
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
////按评级升序排列
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
////按评级降序排列
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
////按价格升序排列
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
////按价格降序排列
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