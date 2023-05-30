#include<iostream>
using namespace std;

int duplicate1(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                count++;
                break; // Break the inner loop once a duplicate is found
            }
        }
    }
    return count;
}
//using hashtable:onlu for loweer case:
//we create an array of 25 size('a' too 'z') and initalize it as 0 ..now checking each letter with their index on the hash table array. we icrement that. 

int duplicate2(string str){
    int H[26]={0};
    int i;
    for(i=0;str[i]!='\0';i++){
        if(isalpha(str[i])){
            H[tolower(str[i])-'a']++;
        }
    }
    for(i=0;i<26;i++){
        if(H[i]>1){
             cout << static_cast<char>(i + 'a') << " - " << H[i] << " occurrences" << endl;
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << duplicate2(str) << endl;
    return 0;
}