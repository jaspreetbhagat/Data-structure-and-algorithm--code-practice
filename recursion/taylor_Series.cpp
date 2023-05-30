#include<iostream>
using namespace std;
//1+(m/1)+(m^2/2!)+(m^3/3!)+---------+nth term.
//here we are taking p as teh power and then updating the value after every recursive call as  
double taylor_Series(int m,int n){
    static double p=1,f=1;//intialized the powernad factorial variable as 1.
    double r;
    if(n==0){
        return 1;
    }
    else{
        r=taylor_Series(m,n-1);
        p=p*m;
        f=f*n;
        return r+(p/f);
 }
int main()
{
    cout<<taylor_Series(6,5);
    
    return 0;
}