//2.采用私有继承而不是包含来完成编程练习1.同样，一些typedef可能会有所帮助，另外，您可能还需要考虑诸如下面这
//样语句的含义：
//	PairArray::operator=(PairArray(ArrayInt(), ArrayInt()));
//	cout << (const string&)(*this);
//您设计的类应该可以使用编程练习1中的测试程序进行测试
#include "winec2.h"

 int main(void)
 {
		using std::cin;
		using std::cout;
		using std::endl;
 
		cout << "Enter name of wine: ";
		char lab[50];
		cin.getline(lab, 50);
		cout << "Enter number of year: ";
		int yrs;
		cin >> yrs;
		
		Wine holding(lab, yrs); //store lable, years, give arrays yrs elements
		holding.GetBottles();   //solicit input for year, bottle count
		holding.Show();			//display object contents
 
		const int YRS = 3;
		int y[YRS] = { 1993, 1995, 1998 };
		int b[YRS] = { 48, 60, 72 };
		//create new object, initialize using data in arrays y and b
		Wine more("Gushing Grape Red", YRS, y, b);
		more.Show();
		cout << "Total bottles for " << more.Lable() //use Lable() method
			<< ": " << more.sum() << endl;			 //use sum() method
		cout << "Bye.\n";
 
		return 0;
 }