#include<iostream>
using namespace std;
string reverse(string str){
    string reversedstr;
    for(int i=str.length()-1;i>=0;i--){
        reversedstr+= str[i];
    } 
     return reversedstr;
}
bool pallindrome(string str){
    string str2=reverse(str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==str2[i]){
            return true;
        }else{
            return false;
        }
    }
}
int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    if(pallindrome(str)){
        cout<<"is a pallindrome;";
    }else{
        cout<<"is not a pallindrome";
    }
    return 0;
}