#include<iostream>
using namespace std;

int main()
{
    char a[] = "WELcome";
    int i;
    for(i=0;a[i]!='\0';i++){
        if(a[i]>=65 && a[i]<=90){
            a[i] = a[i]+32;
        }
        else if(a[i]>=97 && a[i]<=122){
            a[i] = a[i]-32;
        }
    }
    cout<<a;
    // for(i=0;i<9;i++){
    //     cout<<a[i];
    // }
    

    return 0;
}