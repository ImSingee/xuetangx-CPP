#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int* elements = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> elements[i];
    }

    int now = elements[0];
    int result = now;

    for (int i = 1; i < n; i++) {
        if (now <= 0) now = elements[i];
        else now += elements[i];

        result = max(now, result);
    }

    cout << result << endl;
    return 0;
}