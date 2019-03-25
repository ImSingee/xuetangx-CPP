#include <iostream>
#include <algorithm>

using namespace std;

struct Meeting {
    int start;
    int end;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; // 会议数
    cin >> n;

    Meeting *meetings;
    meetings = new Meeting[n];

    for (int i = 0; i < n; i++) {
        cin >> meetings[i].start >> meetings[i].end;
    }

    bool canParticipateAll = true;
    int maxEnd = meetings[0].end;

    for (int i = 1; i < n; i++) {
        maxEnd = max(maxEnd, meetings[i - 1].end);
        if (meetings[i].start < maxEnd) {
            canParticipateAll = false;
            break;
        }
    }

    cout << (canParticipateAll ? "Yes" : "No") << endl;
    return 0;
}