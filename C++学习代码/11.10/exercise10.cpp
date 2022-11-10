//10.请按如下方式修改程序清单16.9(vect3.cpp)。
//a. 在结构Review中添加新成员price。
//b. 不使用vector<Review>来存储输入，而使用vector<shared_ptr<Review>>。别忘了，必须使用new返回的指针来初
//始化shared_ptr.
//c. 在输入阶段结束后，使用一个循环让用户选择如下方式之一显示书籍：按原始顺序显示、按字母表顺序显示、按评
//级升序显示、按评级降序显示、按价格升序显示、按价格降序显示、退出。
//下面是一种可能的解决方案：获取输入后，再创建一个shared_ptr矢量，并使用原始数组初始化它。定义一个对指向
//结构的指针进行比较的operator<()函数，并使用它对第二个矢量进行排序，让其中的shared_ptr按其所指向的对象中
//的书名排序。重复上述过程，创建按rating和price排序的shared_ptr矢量。请注意，通过使用rbegin()和rend()，可
//避免创建按相反的顺序排列的shared_prt矢量。
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>	//使用for_each等需要包含此头文件
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
	}	//将填充的元素放入books数组中


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
	//	//以数组的方式访问books里的内容
	//	/*for (int i = 0; i < num; i++)
	//		ShowReview(books[i]);*/
	//	for_each(books.begin(), books.end(), ShowReview);

	//	//以迭代器的方式访问books里的内容
	//	cout << "Reprising:\n"
	//		<< "Rating\tBook\n";
	//	vector<Review>::iterator pr;	//创建一个Review的迭代器
	//	/*for (pr = books.begin(); pr != books.end(); pr++)
	//		ShowReview(*pr);*/
	//	//for_each()函数的用法
	//	for_each(books.begin(), books.end(), ShowReview);

	//	vector<Review> oldlist(books);	//使用赋值构造函数
	//	if (num > 3)
	//	{
	//		//erase()方法，删除选中范围内的元素，需要传递两个参数
	//		//第一个参数是开始位置，第二个参数是结束位置，但删除并不包含结束位置，只删除从刚开始位置到结束
	//		//位置前一个位置的所有元素。
	//		books.erase(books.begin() + 1, books.begin() + 3);
	//		cout << "After eraseure:\n";
	//		/*for (pr = books.begin(); pr != books.end(); pr++)
	//			ShowReview(*pr);*/
	//		for_each(books.begin(), books.end(), ShowReview);

	//		//insert()方法，从指定位置开始插入选中范围内的元素，需要传递3个参数
	//		//第一个参数是指定要插入元素的位置，第二个参数是从哪里开始取，第三个参数是到哪里结束，插入的结
	//		//束也是结束位置的前一个元素。
	//		books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
	//		cout << "After insertion:\n";
	//		/*for (pr = books.begin(); pr != books.end(); pr++)
	//			ShowReview(*pr);*/
	//		for_each(books.begin(), books.end(), ShowReview);
	//	}
	//	//swap()方法，交换两容器的内容，将oldlist里的元素和books的内容交换；
	//	books.swap(oldlist);
	//	//交换后boos中的内容
	//	cout << "Swapping oldlist with books:\n";
	//	/*for (pr = books.begin(); pr != books.end(); pr++)
	//		ShowReview(*pr);*/
	//	for_each(books.begin(), books.end(), ShowReview);

	//	//交换后oldlist中的内容
	//	cout << "oldlist content:\n";
	//	/*for (pr = oldlist.begin(); pr != oldlist.end(); pr++)
	//		ShowReview(*pr);*/
	//	for_each(oldlist.begin(), oldlist.end(), ShowReview);

	//	//random_shuffle()函数的用法
	//	cout << "After shuffle:\nRating\tBook\n";
	//	random_shuffle(books.begin(), books.end());
	//	for_each(books.begin(), books.end(), ShowReview);

	//	//sort()函数的第一种版本，比较字符串排列
	//	cout << "Sorted by titel:\nRating\tBook\n";
	//	sort(books.begin(), books.end());
	//	for_each(books.begin(), books.end(), ShowReview);

	//	//sort()函数的第二种版本，比较rating
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
	//判断输入是否为quit
	if (r.title == "quit")
		return false;
	cout << "Enter book rating: ";
	cin >> r.rating;
	//输入非法时，结束输入
	if (!cin)
		return false;
	cout << "Enter book price: ";
	cin >> r.price;
	if (!cin)
		return false;
	//将多余的换行消除
	while (cin.get() != '\n');

	return true;
}
//shared_ptr<Review> FillReview()
//{
//	shared_ptr<Review> temp(new Review);
//
//	cout << "Enter book title (quit to quit): ";
//	getline(cin, temp->title);
//	//判断输入是否为quit
//	/*if (temp->title == "quit")
//		return temp;*/
//	cout << "Enter book rating: ";
//	cin >> temp->rating;
//	cout << "Enter book price: ";
//	cin >> temp->price;
//	//输入非法时，结束输入
//	if (!cin)
//		return temp;
//	//将多余的换行消除
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

//按字母顺序排列
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

//按评级升序排列
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

//按评级降序排列
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

//按价格升序排列
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

//按价格降序排列
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
