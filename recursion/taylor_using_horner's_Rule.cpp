#include<iostream>
using namespace std;
//  approach:e^x=1+x/1+x^2+x^3+------
// e^x= [1+x/1[1+x/2[1+x/3[1+x/4]]]]
//iterative : as we know,loops always perform in ascending
int e(int m,int n){
    int s = 1;
    for(;n>0;n--){
        s = (1 + (m/n))*s;
    }
    return s;
}
//recurisve:can only be performed only in ascending.
double e1(int m,int n){
    static double s = 1;
    if(n==0){
        return s;
    }
    else{
        s = (1+(m/n))*s;
        return e(m,n-1);
    }
}
int main()
{
    cout<<e(2,10)<<endl;
    cout<<e1(2,10);
    
    return 0;
}c