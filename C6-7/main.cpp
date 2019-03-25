#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int *list = new int[m * n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> list[i * n + j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << list[i * m + j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}