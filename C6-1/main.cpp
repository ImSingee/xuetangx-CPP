#include <iostream>

using namespace std;


int main() {
    int N;
    cin >> N;

    int nums[5000];
    int maxSum = -5001, sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < N; i++) {

        if (sum <= 0) sum = nums[i];
        else sum += nums[i];

        if (sum > maxSum) maxSum = sum;
    }

    cout << maxSum << endl;
    return 0;
}