#include <iostream>
#include <string>

using namespace std;

int main() {

    char c;
    int result = 0;
    while((c = (char)getchar()) && c >= 'A' && c <= 'Z') {
        result = 26 * result + (c - 0x40);
    }

    cout << result << endl;
    return 0;
}