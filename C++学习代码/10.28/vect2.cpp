//演示了vector容器中的size()，begin()，ebd()，push_back()，erase()，insert()和swap()的用法。为简化数据处理，将
// title和rating组合成了一个Review结构，并使用FillReview()和ShowReview()函数来输入和输出Review对象。
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Review
{
	string title;
	int rating;
};

bool FillReview(Review& r);
void ShowReview(const Review& r);

int main(void)
{
	vector<Review> books;
	Review temp;
	while (FillReview(temp))
		books.push_back(temp);	//将填充的元素放入books数组中
	
	int num = books.size();
	if (num > 0)
	{
		cout << "Thank you. You entered the following:\n"
			<< "Rating\tBook\n";
		//以数组的方式访问books里的内容
		for (int i = 0; i < num; i++)
			ShowReview(books[i]);
		//以迭代器的方式访问books里的内容
		cout << "Reprising:\n"
			<< "Rating\tBook\n";
		vector<Review>::iterator pr;	//创建一个Review的迭代器
		for (pr = books.begin(); pr != books.end(); pr++)
			ShowReview(*pr);

		vector<Review> oldlist(books);	//使用赋值构造函数
		if (num > 3)
		{
			//erase()方法，删除选中范围内的元素，需要传递两个参数
			//第一个参数是开始位置，第二个参数是结束位置，但删除并不包含结束位置，只删除从刚开始位置到结束
			//位置前一个位置的所有元素。
			books.erase(books.begin() + 1, books.begin() + 3);
			cout << "After eraseure:\n";
			for (pr = books.begin(); pr != books.end(); pr++)
				ShowReview(*pr);
			//insert()方法，从指定位置开始插入选中范围内的元素，需要传递3个参数
			//第一个参数是指定要插入元素的位置，第二个参数是从哪里开始取，第三个参数是到哪里结束，插入的结
			//束也是结束位置的前一个元素。
			books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
			cout << "After insertion:\n";
			for (pr = books.begin(); pr != books.end(); pr++)
				ShowReview(*pr);
		}
		//swap()方法，交换两容器的内容，将oldlist里的元素和books的内容交换；
		books.swap(oldlist);
		//交换后boos中的内容
		cout << "Swapping oldlist with books:\n";
		for (pr = books.begin(); pr != books.end(); pr++)
			ShowReview(*pr);
		//交换后oldlist中的内容
		cout << "oldlist content:\n";
		for (pr = oldlist.begin(); pr != oldlist.end(); pr++)
			ShowReview(*pr);
	}
	else
		cout << "Nothing entered, nothing gained.\n";

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
	//将多余的换行消除
	while (cin.get() != '\n');

	return true;
}

void ShowReview(const Review& r)
{
	cout << r.rating << "\t" << r.title << endl;
}