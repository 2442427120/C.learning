//3.�޸ĳ���16.3��ʹ֮���ļ��ж�ȡ���ʡ�һ�ַ����ǣ�ʹ��vector<string>���������string���顣���������ʹ��
//push_back()�������ļ��еĵ��ʸ��Ƶ�vector<string>�����У���ʹ��size()��ȷ�������б�ĳ��ȡ����ڳ���Ӧ��ÿ
//�δ��ļ��ж�ȡһ�����ʣ����Ӧʹ�������>>������getline()���ļ��а����ĵ���Ӧ���ÿո��Ʊ�����з��ָ�
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
//	play = tolower(play);		//����д����Ҳת����Сд��ĸ
//	while (play == 'y')
//	{
//		ifstream fin;
//		//�����е��ʶ�����wordlist.txt�ļ��С�
//		fin.open("wordlist.txt");
//		if (fin.is_open() == false)
//		{
//			cerr << "Can't open file. Bye.\n";
//			exit(EXIT_FAILURE);
//		}
//		/*string target = wordlist[rand() % NUM];	*///Ҫ�²�ĵ���
//		/*string target;*/
//		//fin >> target;
//		vector<string> words;
//		string temp;
//		//���ļ��ж�ȡ���ʴ���words�У�����
//		while (fin)
//		{
//			fin >> temp;
//			words.push_back(temp);
//		}
//		int len = words.size();	//���㵥�ʵ��б�ĳ��ȡ�
//		string target = words[rand() % len];	//�����ʾҪ�²�ĵ�����ʲô
//
//		int length = target.length();	
//		string attempt(length, '-');	//������Ҫ�µ��ʳ�����ͬ��'-'���ַ��������¶Ե���ĸ�����Ӧ��λ��
//		string badchars;	//���ڴ洢������ַ�
//		int guesses = 6;	//����´�Ĵ���
//		cout << "Guess my secret word. It has " << length << " letters, and you guess\n"
//			"one letter at a time, You get " << guesses << " wrong guesses.\n";
//		cout << "Your word: " << attempt << endl;
//		//������Ĵ�������0����û���е��ʵ������
//		while (guesses > 0 && attempt != target)
//		{
//			char letter;
//			cout << "Guess a letter: ";
//			cin >> letter;
//			//�ж�����Ƿ�¹�����ַ�������ǣ�����Ҫôλ��badchars�ַ�����(�´�),Ҫôλ��attempt��(�¶�)
//			if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
//			{
//				cout << "You already guesses that. Try again.\n";
//				continue;
//			}
//			//�ڱ��µĵ����в��ҵ����Ƿ����û��µ��ַ�
//			int loc = target.find(letter);	//���Ҳ²��ַ��ڱ��µ������״γ��ֵ�λ��
//			if (loc == string::npos)	//û�ҵ��������(�´���)
//			{
//				cout << "Oh, bad guess!\n";
//				--guesses;
//				badchars += letter;	//���´����ĸ����badchars�ַ�����
//			}
//			else  //�¶��˵����
//			{
//				cout << "Good guess!\n";
//				attempt[loc] = letter;	//��attempt�ж�Ӧ��λ���滻�ɲ¶Ե��ַ���
//				//��鱻�µ������Ƿ�������ַ�
//				loc = target.find(letter, loc + 1);	//���״β¶��ַ���λ�õ���һ��λ�ÿ�ʼ��ѯ
//				while (loc != string::npos)	//ֱ��λ�õ����ַ���ĩβ����ѭ��
//				{
//					attempt[loc] = letter;
//					loc = target.find(letter, loc + 1);
//				}
//			}
//			//��ʾ�¶��ַ���attempt�ж�Ӧ��λ���Լ��´���ַ���ʣ��Ĵ���
//			cout << "Your word: " << attempt << endl;
//			if (attempt != target)	
//			{
//				if (badchars.length() > 0)	//�������ٲ´��һ��ʱ���Ż��д����ַ�����ʾ
//					cout << "Bad choices: " << badchars << endl;
//				cout << guesses << " bad guesses left\n";
//			}
//		}
//
//		if (guesses > 0) //�ڹ涨�Ĵ����ڲ¶�
//			cout << "That's right!\n";
//		else //�ڹ涨�Ĵ�����û�¶�
//			cout << "Sorry. the word is " << target << ".\n";
//		//�µ�һ����Ϸ
//		cout << "Will you play another? <y/n> ";
//		cin >> play;
//		play = tolower(play);
//	}
//	cout << "Bye.\n";
//
//	return 0;
//}