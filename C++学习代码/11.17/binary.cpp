//2.使用read()和write()方法来读取和创建二进制文件。
//#include <iostream>
//#include <fstream>
//#include <iomanip>
//#include <cstdlib>
//
//using namespace std;
//
//struct planet
//{
//	char name[20];
//	double population;
//	double g;
//};
//
//const char* file = "planets.dat";
//
//int main(void)
//{
//	planet pl;
//	cout << fixed << right;
//
//	ifstream fin;
//	fin.open(file, ios_base::in | ios_base::binary);
//	if (fin.is_open())
//	{
//		cout << "Here are the current contents of the " << file << " file:\n";
//		while (fin.read((char*)&pl, sizeof pl))
//		{
//			cout << setw(20) << pl.name << ": "
//				<< setprecision(0) << setw(12) << pl.population
//				<< setprecision(2) << setw(6) << pl.g << endl;
//		}
//		fin.close();
//	}
//
//	ofstream fout(file, ios_base::out | ios_base::app | ios_base::binary);
//	if (!fout.is_open())
//	{
//		cerr << "Can't open " << file << " file for output:\n";
//		exit(0);
//	}
//
//	cout << "Enter planet name (enter blanket line to quit):\n";
//	cin.get(pl.name, 20);
//	while (pl.name[0] != '\0')
//	{
//		while (cin.get() != '\n')
//			continue;
//		cout << "Enter planetary population: ";
//		cin >> pl.population;
//		cout << "Enter planet's acceleration gravity: ";
//		cin >> pl.g;
//		while (cin.get() != '\n');
//		fout.write((char*)&pl, sizeof pl);
//		cout << "Enter planet name (enter blanket line to quit):\n";
//		cin.get(pl.name, 20);
//	}
//	fout.close();
//
//	fin.clear();
//	fin.open(file, ios_base::in | ios_base::binary);
//	if (fin.is_open())
//	{
//		cout << "Here are the current contents of the " << file << " file:\n";
//		while (fin.read((char*)&pl, sizeof pl))
//		{
//			cout << setw(20) << pl.name << ": "
//				<< setprecision(0) << setw(12) << pl.population
//				<< setprecision(2) << setw(6) << pl.g << endl;
//		}
//		fin.close();
//	}
//
//	return 0;
//}