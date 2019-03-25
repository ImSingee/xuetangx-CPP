#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int lineLength = 2 * n - 1;

	for (int i = 1; i <= n - 1; i++) {
		for (int j = 0; j < (lineLength - (2 * i - 1)) / 2; j++) {
			cout << ' ';
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << '*';
		}
		cout << endl;
	}

	for (int i = 0; i < lineLength; i++) {
		cout << '*';
	}
	cout << endl;

	for (int i = n - 1; i >= 1; i--) {
		for (int j = 0; j < (lineLength - (2 * i - 1)) / 2; j++) {
			cout << ' ';
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << '*';
		}
		cout << endl;
	}

	return 0;
}