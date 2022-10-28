//��ʾ��vector�����е�size()��begin()��ebd()��push_back()��erase()��insert()��swap()���÷���Ϊ�����ݴ�����
// title��rating��ϳ���һ��Review�ṹ����ʹ��FillReview()��ShowReview()��������������Review����
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
		books.push_back(temp);	//������Ԫ�ط���books������
	
	int num = books.size();
	if (num > 0)
	{
		cout << "Thank you. You entered the following:\n"
			<< "Rating\tBook\n";
		//������ķ�ʽ����books�������
		for (int i = 0; i < num; i++)
			ShowReview(books[i]);
		//�Ե������ķ�ʽ����books�������
		cout << "Reprising:\n"
			<< "Rating\tBook\n";
		vector<Review>::iterator pr;	//����һ��Review�ĵ�����
		for (pr = books.begin(); pr != books.end(); pr++)
			ShowReview(*pr);

		vector<Review> oldlist(books);	//ʹ�ø�ֵ���캯��
		if (num > 3)
		{
			//erase()������ɾ��ѡ�з�Χ�ڵ�Ԫ�أ���Ҫ������������
			//��һ�������ǿ�ʼλ�ã��ڶ��������ǽ���λ�ã���ɾ��������������λ�ã�ֻɾ���Ӹտ�ʼλ�õ�����
			//λ��ǰһ��λ�õ�����Ԫ�ء�
			books.erase(books.begin() + 1, books.begin() + 3);
			cout << "After eraseure:\n";
			for (pr = books.begin(); pr != books.end(); pr++)
				ShowReview(*pr);
			//insert()��������ָ��λ�ÿ�ʼ����ѡ�з�Χ�ڵ�Ԫ�أ���Ҫ����3������
			//��һ��������ָ��Ҫ����Ԫ�ص�λ�ã��ڶ��������Ǵ����￪ʼȡ�������������ǵ��������������Ľ�
			//��Ҳ�ǽ���λ�õ�ǰһ��Ԫ�ء�
			books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
			cout << "After insertion:\n";
			for (pr = books.begin(); pr != books.end(); pr++)
				ShowReview(*pr);
		}
		//swap()���������������������ݣ���oldlist���Ԫ�غ�books�����ݽ�����
		books.swap(oldlist);
		//������boos�е�����
		cout << "Swapping oldlist with books:\n";
		for (pr = books.begin(); pr != books.end(); pr++)
			ShowReview(*pr);
		//������oldlist�е�����
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
	//�ж������Ƿ�Ϊquit
	if (r.title == "quit")
		return false;
	cout << "Enter book rating: ";
	cin >> r.rating;
	//����Ƿ�ʱ����������
	if (!cin)
		return false;
	//������Ļ�������
	while (cin.get() != '\n');

	return true;
}

void ShowReview(const Review& r)
{
	cout << r.rating << "\t" << r.title << endl;
}