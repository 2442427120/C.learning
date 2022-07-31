#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct donor
{
	string name;
	double amount;
};

int main(void)
{
	ifstream inFile;
	int number;	
	int i = 0;
	int gpa = 0;	
	int pa = 0;
	char file_name[20];

	cout << "Please enter file name: ";
	cin.getline(file_name, 20);
	inFile.open(file_name);
	if (!inFile.is_open())
	{
		cout << "Fail to open file!" << endl;
		exit(EXIT_FAILURE);
	}

	inFile >> number;
	if (number <= 0)
		exit(EXIT_FAILURE);

	donor* donor_information = new donor[number];
	inFile.get();

	while ((!inFile.eof()) && (i < number))
	{
		getline(inFile, donor_information[i].name);
		cout << "Read name: " << donor_information[i].name << endl;
		inFile >> donor_information[i].amount;
		cout << "Read amount: " << donor_information[i].amount << endl;
		i++;
		inFile.get();
	}

	cout << "\nGrand Patrons:\n";
	for (int i = 0; i < number; ++i)
	{
		if (donor_information[i].amount >= 10000)
		{
			cout << "donor name: " << donor_information[i].name << "\n";
			cout << "donor amount: " << donor_information[i].amount << endl;
			gpa++;
		}
	}
	if (0 == gpa)
		cout << "none" << endl;

	cout << "\nPatrons:\n";
	for (int i = 0; i < number; ++i)
	{
		if (donor_information[i].amount < 10000)
		{
			cout << "donor name: " << donor_information[i].name << endl;
			pa++;
		}
	}
	if (0 == pa)
		cout << "none" << endl;

	delete []donor_information;
	inFile.close();
 
	return 0;
}