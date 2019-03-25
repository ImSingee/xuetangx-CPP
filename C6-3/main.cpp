#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void pushToMins(vector<int> &mins, int item) {
    auto length = mins.size();

    for(int i = 0; i < length; i++) {

        if (item < mins[i]) {

            for (auto j = length - 1; j > i; j--) {
                mins[j] = mins[j - 1];
            }

            mins[i] = item;
            break;
        }
    }

}

int main() {
    unsigned int n, k;

    cin >> n >> k;

    vector<int> allNums;

    for (int i = 0; i < n; i++) {
        int item;
        cin >> item;
        allNums.push_back(item);
    }

    vector<int> mins(k);
    for (int i = 0; i < k; i++) {
        mins[i] = allNums[i];
    }

    sort(mins.begin(), mins.end());

    for (int i = k; i < n; i++) {
        pushToMins(mins, allNums[i]);
    }

    std::cout << mins[k - 1] << std::endl;
    return 0;
}