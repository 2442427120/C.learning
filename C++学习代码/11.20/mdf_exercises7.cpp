#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

class Store
{
private:
	std::ofstream& os;
public:
	Store(std::ofstream& ofs) : os(ofs) {}
	void operator()(const std::string& s);
};

void Store::operator()(const std::string& s)
{
	size_t len = s.size();

	os.write((char*)&len, sizeof len);
	os.write(s.data(), len);
}

inline void ShowStr(const std::string& s)
{
	std::cout << s << std::endl;
}
void GetStrs(std::ifstream& ifs, std::vector<std::string>& vs);

int main(void)
{
	using namespace std;
	vector<string> vostr;
	string temp;

	//acquire strings
	cout << "Enter strings (empty line to quit):\n";
	while (getline(cin, temp) && temp[0] != '\0')
		vostr.push_back(temp);
	cout << "Here is your input.\n";
	for_each(vostr.begin(), vostr.end(), ShowStr);

	//store in a file
	ofstream fout("strings.dat", ios_base::out | ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();

	/*recover file contents*/
	vector<string> vistr;
	ifstream fin("strings.dat", ios_base::in | ios_base::binary);
	if (!fin.is_open())
	{
		cerr << "Could not open file for input.\n";
		exit(EXIT_FAILURE);
	}
	GetStrs(fin, vistr);
	cout << "\nHere are the strings read from the file:\n";
	for_each(vistr.begin(), vistr.end(), ShowStr);

	return 0;
}

void GetStrs(std::ifstream& ifs, std::vector<std::string>& vs)
{
	size_t len;
	char* pd;
	//read()函数将文件中第一行的长度放入到len中
	while (ifs.read((char*)&len, sizeof len))
	{
		pd = new char[len];
		ifs.read(pd, len);
		vs.push_back(pd);
		delete[]pd;
	}
}
