#include<iostream>
using namespace std;

int main()
{
    char s[100];
    int i=0;
    cout<<"enter the string:"<<endl;
    cin>>s;
    while(s[i]!='\0'){
        i++;
    }
    cout<<"length of the string is :"<<i;
    return 0;
}