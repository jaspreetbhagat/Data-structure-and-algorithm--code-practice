#include<iostream>
using namespace std;
//recursive function calling itself more than one time.
int fun(int n){
    if(n>0){
        cout<<n<<"";
        fun(n-1);
        fun(n-1);
    }
}
int main()
{
    fun(3);
    return 0;
}