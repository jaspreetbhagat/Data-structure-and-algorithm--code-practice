//An anagram is a word or phrase formed by rearranging the letters of another word or phrase. In other words, two words are anagrams if they contain the same characters in a different order
#include<iostream>
#include<algorithm>
using namespace std;
// bool isAnagram(const string& str1, const string& str2) {
//     if (str1.length() != str2.length()) {
//         return false;
//     }

//     int count[MAX_CHAR] = {0};

//     // Increment count for characters in str1
//     for (int i = 0; i < str1.length(); i++) {
//         count[str1[i]]++;
//     }

//     // Decrement count for characters in str2
//     for (int i = 0; i < str2.length(); i++) {
//         count[str2[i]]--;
//     }

//     // If any count is non-zero, strings are not anagrams
//     for (int i = 0; i < MAX_CHAR; i++) {
//         if (count[i] != 0) {
//             return false;
//         }
//     }

//     return true;
// }

bool isAnagram(string str1,string str2){
    if(str1.length() !=str2.length()){
        return false;
    }
    string sortedstr1 = str1;
    string sortedstr2 = str2;
    sort(sortedstr1.begin(),sortedstr1.end());
    sort(sortedstr2.begin(),sortedstr2.end());
    return sortedstr1 == sortedstr2;

}
int main()
{
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    if (isAnagram(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    
    return 0;
}