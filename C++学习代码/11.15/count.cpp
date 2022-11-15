//2.该程序结合使用命令行技术和文件流技术，来计算命令行上列出的文件包含的字符数。
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		cerr << "Usage: " << argv[0] << " filename(s)\n";
		exit(0);
	}

	ifstream fin;
	long count;
	long total = 0;
	char ch;

	for (int file = 1; file < argc; file++)
	{
		fin.open(argv[file]);
		if (!fin.is_open())
		{
			cerr << "Could not open " << argv[file] << endl;
			fin.clear();
			continue;
		}

		count = 0;
		while (fin.get(ch))
			count++;
		cout << count << " characters in " << argv[file] << endl;
		total += count;
		fin.clear();
		fin.close();
	}
	cout << total << " characters in all files.\n";

	system("pause");

	return 0;
}

//int main(void)
//{
//	cout << "hello world\n";
//	system("pause");
//
//	return 0;
//}