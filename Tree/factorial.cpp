#include <iostream>
using namespace std;
int fact(int n);

int main()
{
	fact(10);

	return 0;
}

int fact(int n) {
	cout << n << endl;
	if (n == 1)
		return 1;
	else {
		return (n * fact(n - 1));
	}
}