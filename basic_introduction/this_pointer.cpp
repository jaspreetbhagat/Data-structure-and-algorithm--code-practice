#include<iostream>
using namespace std;
class test{
    int a,b;
    public:
    test(int num1,int num2);
    int sum();
    int get_values();
};
test::test(int num1,int num2){
    this ->a = num1;
    this ->b = num2;
}
int test::sum(){
    int c;
    c = test::a + test::b;
    return c;
}
int test::get_values(){
    cout<<"enter the values of  a and b:"<<endl;
    cin>>test::a>>test::b;
}
int main()
{
    test obj(0,0);
    obj.get_values();
    cout<<"the sum = "<<obj.sum();
    return 0;
}