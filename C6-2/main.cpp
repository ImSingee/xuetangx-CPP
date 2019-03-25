#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPalindrome (const string& str) {
    if (!str.length()) return false;

    int i = 0, j = (int) str.length() - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }

        i++; j--;
    }

    return true;
}

void getAllSubstrs(const string& originalStr, int startIndex, const string &currentStr, vector<string>& result) {
    if (isPalindrome(currentStr)) result.push_back(currentStr);

    for (int i = startIndex; i < originalStr.length(); i++) {
        string newStr = currentStr + originalStr[i];
        getAllSubstrs(originalStr, i + 1, newStr, result);
    }

}

int main() {

    string s;
    getline(cin, s);

    vector<string> allSubStrs;
    getAllSubstrs(s, 0, "", allSubStrs);

//    for (const auto& sub: allSubStrs) {
//        cout << sub << endl;
//    }

    cout << allSubStrs.size() << endl;

    return 0;
}