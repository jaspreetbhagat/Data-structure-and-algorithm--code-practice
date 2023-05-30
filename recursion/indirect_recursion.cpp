#include<iostream>
using namespace std;
void funB(int y);
void funA(int x){
    if(x>0){
        cout<<x<<" ";
        funB(x-1);
    }
}
void funB(int y){
    if(y>1){
        cout<<y<<" ";
        funA(y/2);
    }
}
int main()
{
    funA(20);
    return 0;
}    