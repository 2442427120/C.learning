#include <iostream> //a PREPROCESSOR directive
#include <cmath>

int stonetolb(int sts);

int main(void)
{
	using namespace std;

	int stone;

	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;

	return 0;
}

int stonetolb(int sts)
{
	return 14 * sts;
}

//void simon(int n);
//
//int main(void)
//{
//	using namespace std;
//
//	simon(3);
//	cout << "Pick an integer: ";
//	int count;
//	cin >> count;
//	simon(count);
//	cout << "Done!" << endl;
//
//	return 0;
//}
//
//void simon(int n)
//{
//	using namespace std;
//
//	cout << "Simon say touch your toes " << n << " time." << endl;
//}

//int main(void)
//{
//	using namespace std;
//
//	double area;
//	cout << "Enter the floor area, in squares feet, of you home:";
//	cin >> area;
//	double side;
//	side = sqrt(area);
//	cout << "That's the equivalent of a squar " << side << " feet to the side." << endl;
//	cout << "How fascinating!" << endl;
//
//
//	return 0;
//}

//int main()
//{
//	using namespace std;
//	cout << sqrt(6.25) << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	int carrots;
//
//	cout << "How many carrots do you have?" << endl;
//	cin >> carrots;	//C++ input
//	cout << "Here are two more. ";
//	carrots = carrots + 2;
//	cout << "Now you have " << carrots << " carrots." << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	int carrots;
//
//	carrots = 25;
//	cout << "I have ";
//	cout << carrots;
//	cout << " carrots.";
//	cout << endl;
//	carrots = carrots + 1;
//	cout << "Crunch, crunch. Now I hava " << carrots << " carrots." << endl;
//
//	return 0;
//}

//int main(void)	
//{	
//	using namespace std;
//
//	cout << "Come up and C++ me some time.";
//	cout << endl;	//start a new line
//	cout << "You won't reget it!" << endl;
//
//	return 0;
//}