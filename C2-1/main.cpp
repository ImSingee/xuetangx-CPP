#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a[100];
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}

	int sum=a[0];
	int maxNum=a[0], minNum=a[0];

	for (int i = 1; i < n; i++) {
		sum += a[i];
		if (a[i] > maxNum) {
			maxNum = a[i];
		}
		if (a[i] < minNum) {
			minNum = a[i];
		}
	}

	cout << sum << ' ' << minNum << ' ' << maxNum << endl;

	return 0;
}