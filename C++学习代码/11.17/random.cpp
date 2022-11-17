//3.运用seekg()和seekp()实现文件的随机存取
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

const int LIM = 20;
const char* file = "planets.dat";

struct planet
{
	char name[LIM];
	double population;
	double g;
};

inline void eatline() { while (std::cin.get() != '\n') continue; }

int main(void)
{
	using namespace std;
	planet pl;
	cout << fixed;

	//显示文件的内容
	fstream finout;
	finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
	int ct = 0;
	if (finout.is_open())
	{
		finout.seekg(0);
		cout << "Here are the current contents of the " << file << " file:\n";
		while (finout.read((char*)&pl, sizeof pl))
		{
			cout << ct++ << ": " << setw(20) << pl.name << ": "
				<< setprecision(0) << setw(12) << pl.population
				<< setprecision(2) << setw(6) << pl.g << endl;
		}
		if (finout.eof())
			finout.clear();
		else
		{
			cerr << "Error in reading " << file << ".\n";
			exit(0);
		}
	}
	else
	{
		cerr << file << " could not be opene -- bye.\n";
		exit(0);
	}

	//显示用户要修改的数据的内容
	cout << "Enter the record number you wish to change: ";
	long rec;
	cin >> rec;
	eatline();
	if (rec < 0 || rec >= ct)
	{
		cerr << "Invalid recode number -- bye.\n";
		exit(0);
	}
	streampos place = rec * sizeof pl;
	finout.seekg(place);
	if (finout.fail())
	{
		cerr << "Error on attempted seek\n";
		exit(0);
	}

	finout.read((char*)&pl, sizeof pl);
	cout << "Your selection:\n";
	cout << rec << ": " << setw(20) << pl.name << ": "
		<< setprecision(0) << setw(12) << pl.population
		<< setprecision(2) << setw(6) << pl.g << endl;
	if (finout.eof())
		finout.clear();

	cout << "Enter planet name: ";
	cin.get(pl.name, LIM);
	eatline();
	cout << "Enter planetary population: ";
	cin >> pl.population;
	cout << "Enter planet's acceleration gravity: ";
	cin >> pl.g;
	finout.seekp(place);
	finout.write((char*)&pl, sizeof pl);
	if (finout.fail())
	{
		cerr << "Error on attempted write\n";
		exit(0);
	}

	//显示修改后文件的内容
	ct = 0;
	finout.seekg(0);
	cout << "Here are the new contents of the " << file << " file:\n";
	while (finout.read((char*)&pl, sizeof pl))
	{
		cout << ct++ << ": " << setw(20) << pl.name << ": "
			<< setprecision(0) << setw(12) << pl.population
			<< setprecision(2) << setw(6) << pl.g << endl;
	}
	finout.close();

	return 0;
}