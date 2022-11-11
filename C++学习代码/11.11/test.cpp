#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> num{ 1, 2, 3, 4, 5 };

	for (auto i : num)
		cout << i << " ";

	return 0;
}