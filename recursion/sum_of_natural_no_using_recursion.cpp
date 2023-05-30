#include<iostream>
using namespace std;
// n(n+1)/2;
int sum(int n){
    int s=0;
    if(n>0){
        s = sum(n-1) + n;
        n--;
    }
    return s;  
}
int main()
{
    int s = sum(5);
    cout<<s<<" ";
    return 0;
}  