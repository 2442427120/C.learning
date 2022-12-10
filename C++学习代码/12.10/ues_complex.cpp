#include "complex.h"

int main(void)
{
	//Complex cmp1(1.1, 2.2);
	//cmp1.Show();

	//Complex cmp2(5.5, 7.7);
	//cmp1.Add(cmp2);
	//cmp1.Show();

	//Complex cmp3(3.3, 6.6);
	//cmp1.Sub(cmp3);
	//cmp1.Show();

	Complex cmp1(1.1, 2.2);
	cout << cmp1;

	Complex cmp2(5.5, 7.7);
	cmp1 = cmp1 + cmp2;
	cout << cmp1;

	Complex cmp3(3.3, 6.6);
	//cmp1 = cmp1 - cmp3;
	//cout << cmp1;
	cmp3 = cmp3 - cmp1;
	cout << cmp3;

	return 0;
}