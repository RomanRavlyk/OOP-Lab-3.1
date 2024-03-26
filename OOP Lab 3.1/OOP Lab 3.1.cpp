#include "Solution.h"
#include <iostream>
using namespace std;

int main()
{
	Liquid liquid("water", 23);
	Solution sol(liquid, 43);
	cout << sol;
	cin >> sol;
	cout << sol;

	return 0;
}