#include<iostream>
using namespace std;
template<class J>
class test{
    J a,b;
    public:
    test(J num1,J num2);
    J sum();
    J get_values();
};
template<class J>
test<J>::test(J num1,J num2){
    this ->a = num1;
    this ->b = num2;
}
template<class J>
J test<J>::sum(){
    J c;
    c = a+b;
    return c;
}
template<class J>
J test<J>::get_values(){
    cout<<"enter the values of  a and b:"<<endl;
    cin>>test::a>>test::b;
}
main()
{
    cout<<"for int"<<endl;
    test<int> obj(20,30);
    obj.get_values();
    cout<<"the sum = "<<obj.sum();

    cout<<"for float"<<endl;
    test<float> obj1(0,0);
    obj1.get_values();
    cout<<"the sum = "<<obj1.sum();

}