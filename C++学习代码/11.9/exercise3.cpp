//3.修改程序16.3，使之从文件中读取单词。一种方案是，使用vector<string>对象而不是string数组。这样便可以使用
//push_back()将数据文件中的单词复制到vector<string>对象中，并使用size()来确定单词列表的长度。由于程序应该每
//次从文件中读取一个单词，因此应使用运算符>>而不是getline()。文件中包含的单词应该用空格、制表符或换行符分隔
//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <ctime>
//#include <cctype>
//#include <fstream>
//#include <vector>
//
//using namespace std;
//
////const string wordlist[NUM] = { "apiary", "beetle", "cereal", "danger", "ensign", "florid", "garage",
////  "health", "insult", "jackal", "keeper", "longer", "manage", "nonce", "onset", "plaid", "quilt",
////	"remote", "stolid", "train", "useful", "valid", "whence", "xenon", "yearn", "zippy"
////};
//
//int main(void)
//{
//	srand((unsigned int)time(0));
//	char play;
//	cout << "Will you play a word game? <y/n> ";
//	cin >> play;
//	play = tolower(play);		//将大写输入也转换成小写字母
//	while (play == 'y')
//	{
//		ifstream fin;
//		//将所有单词都放入wordlist.txt文件中。
//		fin.open("wordlist.txt");
//		if (fin.is_open() == false)
//		{
//			cerr << "Can't open file. Bye.\n";
//			exit(EXIT_FAILURE);
//		}
//		/*string target = wordlist[rand() % NUM];	*///要猜测的单词
//		/*string target;*/
//		//fin >> target;
//		vector<string> words;
//		string temp;
//		//从文件中读取单词存入words中，将。
//		while (fin)
//		{
//			fin >> temp;
//			words.push_back(temp);
//		}
//		int len = words.size();	//计算单词的列表的长度。
//		string target = words[rand() % len];	//随机表示要猜测的单词是什么
//
//		int length = target.length();	
//		string attempt(length, '-');	//设置与要猜单词长度相同的'-'连字符，并将猜对的字母存入对应的位置
//		string badchars;	//用于存储错误的字符
//		int guesses = 6;	//允许猜错的次数
//		cout << "Guess my secret word. It has " << length << " letters, and you guess\n"
//			"one letter at a time, You get " << guesses << " wrong guesses.\n";
//		cout << "Your word: " << attempt << endl;
//		//当允许的次数大于0，且没猜中单词的情况下
//		while (guesses > 0 && attempt != target)
//		{
//			char letter;
//			cout << "Guess a letter: ";
//			cin >> letter;
//			//判断玩家是否猜过这个字符，如果是，则它要么位于badchars字符串中(猜错),要么位于attempt中(猜对)
//			if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
//			{
//				cout << "You already guesses that. Try again.\n";
//				continue;
//			}
//			//在被猜的单词中查找单词是否有用户猜的字符
//			int loc = target.find(letter);	//查找猜测字符在被猜单词中首次出现的位置
//			if (loc == string::npos)	//没找到的情况下(猜错了)
//			{
//				cout << "Oh, bad guess!\n";
//				--guesses;
//				badchars += letter;	//将猜错的字母放入badchars字符串中
//			}
//			else  //猜对了的情况
//			{
//				cout << "Good guess!\n";
//				attempt[loc] = letter;	//将attempt中对应的位置替换成猜对的字符。
//				//检查被猜单词中是否还有这个字符
//				loc = target.find(letter, loc + 1);	//从首次猜对字符的位置的下一个位置开始查询
//				while (loc != string::npos)	//直到位置到达字符串末尾结束循环
//				{
//					attempt[loc] = letter;
//					loc = target.find(letter, loc + 1);
//				}
//			}
//			//显示猜对字符在attempt中对应的位置以及猜错的字符和剩余的次数
//			cout << "Your word: " << attempt << endl;
//			if (attempt != target)	
//			{
//				if (badchars.length() > 0)	//当有至少猜错过一次时，才会有错误字符的显示
//					cout << "Bad choices: " << badchars << endl;
//				cout << guesses << " bad guesses left\n";
//			}
//		}
//
//		if (guesses > 0) //在规定的次数内猜对
//			cout << "That's right!\n";
//		else //在规定的次数内没猜对
//			cout << "Sorry. the word is " << target << ".\n";
//		//新的一次游戏
//		cout << "Will you play another? <y/n> ";
//		cin >> play;
//		play = tolower(play);
//	}
//	cout << "Bye.\n";
//
//	return 0;
//}