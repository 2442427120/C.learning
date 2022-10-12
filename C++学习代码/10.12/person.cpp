#include "person.h"

//Person method
Person::~Person()
{
}

//Person protected method
void Person::Data() const
{
	cout << "Fullname: " << fname << lname << endl;
}

void Person::Get()
{
	cout << "Enter last name: ";
	getline(cin, lname);
	cout << "Enter first name: ";
	getline(cin, fname);
	/*while (cin.get() != '\n')
		continue;*/
}

//Person public method
void Person::Show() const
{
	cout << "Fullname: " << fname << lname << endl;
}

//Gunslinger protected method
void Gunslinger::Data() const
{
	cout << "Drawtime: " << drawTime << ", Nicks: " << nicks << endl;
}

void Gunslinger::Get()
{
	cout << "Enter Gunslinger's nicks: ";
	cin >> nicks;
	cout << "Enter Gunslinger's drawtime: ";
	cin >> drawTime;
	while (cin.get() != '\n')
		continue;
}

//Gunslinger public method
void Gunslinger::Set()
{
	cout << "Enter Gunslinger name:\n";
	Person::Get();
	Get();
}

void Gunslinger::Show() const
{
	cout << "Category: Gunslinger:\n";
	Person::Data();
	Data();
}

//PokerPlayer public method
int PokerPlayer::Draw()
{
	return (rand() % 52 + 1);	//产生1-52的随机值
}

void PokerPlayer::Set()
{
	cout << "Enter PokerPlayer name:\n";
	Person::Get();
}

void PokerPlayer::Show() const
{
	cout << "Category: PokerPlayer:\n";
	Person::Show();
}

//BadDude public method
double BadDude::Gdraw()
{
	return Gunslinger::Draw();
}

int BadDude::Ccard()
{
	return PokerPlayer::Draw();
}

void BadDude::Set()
{
	cout << "Enter BadDude name:\n";
	Person::Get();
	Gunslinger::Get();
}

void BadDude::Show() const
{
	cout << "Category: BadDude:\n";
	Person::Data();
	Gunslinger::Data();
}

