#include<iostream>
using namespace std;

int main()
{
    string str1;
    string str2;
    getline(cin,str1);
    getline(cin,str2);
    int i,j;
    for(i=0,j=0;str1[i]!='\0' && str2[j]!='\0';i++,j++){
        if(str1[i]!=str2[j]){
            break;
        }
    }
        if(str1[i]==str2[j]){
            cout<<"equal strings";
        }
        else if(str1[i]<str2[j]){
            cout<<str1<<"  is smaller than "<<str2;
        }
        else{
            cout<<str1<<"  is greater than "<<str2;
        }
    return 0;
}