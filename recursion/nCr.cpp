#include<iostream>
using namespace std;
// nCr = n!/r!(n-r)!
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
//iterative method: O(n) 
int combination(int n, int r){
    int t1,t2,t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n-r);
    return t1/(t2*t3);
}
//recursive method: using pascal trianglec
int combinationR(int n,int r){
    if(r==0||n==r){
        return 1;
    }
    else{
        return combinationR(n-1,r-1)+combinationR(n-1,r);
    }
}
int main()
{
    cout<<combinationR(4,4)<<endl;
    cout<<combination(4,4);
    return 0;
}