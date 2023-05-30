#include<iostream>
using namespace std;
void generatePermutations(string str, int left, int right) {
    if (left == right) {
        // Base case: Reached the last character, print permutation
        cout << str << endl;
        return;
    }

    // Recursive case: Generate permutations
    for (int i = left; i <= right; i++) {
        // Swap the current character with the first character
        swap(str[left], str[i]);

        // Recursively generate permutations for the remaining characters
        generatePermutations(str, left + 1, right);

        // Restore the original order by swapping back
        swap(str[left], str[i]);
    }
}

void printPermutations(const string& str) {
    generatePermutations(str, 0, str.length() - 1);
}

 
int main()
{ string str;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Permutations of the string:" << endl;
    printPermutations(str); 
    return 0;
}