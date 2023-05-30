#include<iostream>
using namespace std;
string reverse( string str){
    for(int i=str.length();i>=0;i--){
        cout<<str[i];
    }
}
int main()
{
    string input;
    cout<<"Enter a sting:";
    getline(cin,input);
    reverse(input);
    
    return 0;
}