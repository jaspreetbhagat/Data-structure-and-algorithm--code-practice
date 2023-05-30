#include<iostream>
#include<ctype.h>
using namespace std;
bool isvalid(const string &str){
    for(int i=0;str[i]!='\0';i++){
        if(!(isalnum(str[i]))){
            return false;
        }
    }
    return true;
}

int main()
{
    string input;
    cout<<"Enter a sting:";
    getline(cin,input);
    if(isvalid(input)){
        cout<<"Valid Input";
    }
    else{
        cout<<"invalid input";
    }
    return 0;
}