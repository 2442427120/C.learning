//��ʾSTL�е�for_each(),random_shuffle()��sort()����������sort()������������ʽ
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>	//ʹ��for_each����Ҫ������ͷ�ļ�
//
//using namespace std;
//
//struct Review
//{
//	string title;
//	int rating;
//};
//
//bool FillReview(Review& r);
//void ShowReview(const Review& r);
//
//bool WorseThan(const Review& r1, const Review& r2);
//
//int main(void)
//{
//	vector<Review> books;
//	Review temp;
//	while (FillReview(temp))
//		books.push_back(temp);	//������Ԫ�ط���books������
//
//	int num = books.size();
//	if (num > 0)
//	{
//		cout << "Thank you. You entered the following:\n"
//			<< "Rating\tBook\n";
//		//������ķ�ʽ����books�������
//		/*for (int i = 0; i < num; i++)
//			ShowReview(books[i]);*/
//		for_each(books.begin(), books.end(), ShowReview);
//
//		//�Ե������ķ�ʽ����books�������
//		cout << "Reprising:\n"
//			<< "Rating\tBook\n";
//		vector<Review>::iterator pr;	//����һ��Review�ĵ�����
//		/*for (pr = books.begin(); pr != books.end(); pr++)
//			ShowReview(*pr);*/
//		//for_each()�������÷�
//		for_each(books.begin(), books.end(), ShowReview);
//
//		vector<Review> oldlist(books);	//ʹ�ø�ֵ���캯��
//		if (num > 3)
//		{
//			//erase()������ɾ��ѡ�з�Χ�ڵ�Ԫ�أ���Ҫ������������
//			//��һ�������ǿ�ʼλ�ã��ڶ��������ǽ���λ�ã���ɾ��������������λ�ã�ֻɾ���Ӹտ�ʼλ�õ�����
//			//λ��ǰһ��λ�õ�����Ԫ�ء�
//			books.erase(books.begin() + 1, books.begin() + 3);
//			cout << "After eraseure:\n";
//			/*for (pr = books.begin(); pr != books.end(); pr++)
//				ShowReview(*pr);*/
//			for_each(books.begin(), books.end(), ShowReview);
//
//			//insert()��������ָ��λ�ÿ�ʼ����ѡ�з�Χ�ڵ�Ԫ�أ���Ҫ����3������
//			//��һ��������ָ��Ҫ����Ԫ�ص�λ�ã��ڶ��������Ǵ����￪ʼȡ�������������ǵ��������������Ľ�
//			//��Ҳ�ǽ���λ�õ�ǰһ��Ԫ�ء�
//			books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
//			cout << "After insertion:\n";
//			/*for (pr = books.begin(); pr != books.end(); pr++)
//				ShowReview(*pr);*/
//			for_each(books.begin(), books.end(), ShowReview);
//		}
//		//swap()���������������������ݣ���oldlist���Ԫ�غ�books�����ݽ�����
//		books.swap(oldlist);
//		//������boos�е�����
//		cout << "Swapping oldlist with books:\n";
//		/*for (pr = books.begin(); pr != books.end(); pr++)
//			ShowReview(*pr);*/
//		for_each(books.begin(), books.end(), ShowReview);
//
//		//������oldlist�е�����
//		cout << "oldlist content:\n";
//		/*for (pr = oldlist.begin(); pr != oldlist.end(); pr++)
//			ShowReview(*pr);*/
//		for_each(oldlist.begin(), oldlist.end(), ShowReview);
//
//		//random_shuffle()�������÷�
//		cout << "After shuffle:\nRating\tBook\n";
//		random_shuffle(books.begin(), books.end());
//		for_each(books.begin(), books.end(), ShowReview);
//
//		//sort()�����ĵ�һ�ְ汾���Ƚ��ַ�������
//		cout << "Sorted by titel:\nRating\tBook\n";
//		sort(books.begin(), books.end());
//		for_each(books.begin(), books.end(), ShowReview);
//
//		//sort()�����ĵڶ��ְ汾���Ƚ�rating
//		cout << "Sorted by rating:\nRating\tBook\n";
//		sort(books.begin(), books.end(), WorseThan);
//		for_each(books.begin(), books.end(), ShowReview);
//	}
//	else
//		cout << "Nothing entered, nothing gained.\n";
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
//	//������Ļ�������
//	while (cin.get() != '\n');
//
//	return true;
//}
//
//void ShowReview(const Review& r)
//{
//	cout << r.rating << "\t" << r.title << endl;
//}
//
//bool operator<(const Review& r1, const Review& r2)
//{
//	if (r1.title < r2.title)
//		return true;
//	else if (r1.title == r2.title && r1.rating < r2.rating)
//		return true;
//	else
//		return false;
//}
//
//bool WorseThan(const Review& r1, const Review& r2)
//{
//	if (r1.rating < r2.rating)
//		return true;
//	else
//		return false;
//}