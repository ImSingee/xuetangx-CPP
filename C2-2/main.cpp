#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int result = 0;
	int p = 1;

	do {
		int r = n % 10;
		n = n / 10;

		result += p * r;

		p *= 2;

	} while (n > 0);

	cout << result << endl;

	return 0;
}