#include<iostream>
using namespace std;
//a recursive function will pass parameters as a recursive call;
int fun(int n){
    if(n>100){
        return n-10;
    }
    else {
        return fun(fun(n+11));
    }  
}
int main()
{
    int r = fun(95);  
    cout<<r<<"";
    return 0;
}
