#include<iostream>
using namespace std;
struct stack{
        
}
int isOperand(char x){
    if(x=='+'|| x== '-'|| x == '*' || x == '/')
        return 0;
    else
        return 1;
}
int pre(char x){
    if(x== '+'|| x=='-')
        return 1;
    else if(x=='*'||x=='/')
        return 2;
    return 0;
}
string convert(string infix){

}
int main()
{
    
    return 0;
}