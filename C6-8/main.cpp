#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num;
    cin >> num;

    vector<int> output;

    while (num != 0) {
        int t = num % 26;
        if (t == 0) t = 26;
        output.push_back(t);
        num -= t;
        num /= 26;
    }

    for (auto p = output.rbegin(); p != output.rend(); p++) {
        cout << char(*p + 0x40);
    }
    cout << endl;

    return 0;
}

