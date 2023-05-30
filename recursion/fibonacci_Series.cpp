#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fibo(n-1)+fibo(n-2);
    }
}
//memoristation function:one global array to reduce the calling 
int fib1(int n){
    int f[10];
    for(int i=0;i<n;i++){
        f[i] = -1;
    }
    if(n<=1){
        f[n]=n;
        return n;
    }
    else{
        if(f[n-2]==-1){
            f[n-2] = fib1(n-2);
        }
        if(f[n-1]==-1){
            f[n-1]=fib1(n-1);
        }
        return f[n-2]+f[n-1];
    }
}
int main()
{
    cout<<fib1(7);
    
    return 0;
}