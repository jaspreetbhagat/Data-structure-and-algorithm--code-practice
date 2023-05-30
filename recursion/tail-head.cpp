#include<iostream>
using namespace std;
int fun(int x){
    if (x>0) 
    {
        fun(x-1);//for head recursion//123
        cout<<x;
        fun(x-1); //for tail recusrion//321
    }
}
int main(){
    int x = 5;
    fun(x);
    return 0;
}