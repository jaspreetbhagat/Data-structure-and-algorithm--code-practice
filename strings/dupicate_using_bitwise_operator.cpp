#include<iostream>
using namespace std;
//bitwise operations:
// left shift<<
// bits ANDing(masking)
//bits ORing (merging)


void findDuplicates(const string& str) {
    int checker = 0;

    cout << "Duplicate characters in the string: ";
    for (char ch : str) {
        int bitPosition = ch - 'a';
        int bitMask = 1 << bitPosition;

        if (checker & bitMask) {
            cout << ch << " ";
        } else {
            checker |= bitMask;
        }
    }
    cout << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    findDuplicates(str);

    return 0;
}