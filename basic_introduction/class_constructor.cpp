//using classes and constructors
#include<iostream>
using namespace std;
class test{
    private:
    int a;
    int b;
    public:
    test(int num1, int num2){
        // num1 = a;
        a = num1;
        b = num2;
        // num2 = b;
    }
    void display(){
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    }
    void swap(){
        int temp;
        temp = a;
        a = b;
        b = temp;
        cout<<"after swapping:"<<endl;
        display();
    }
};
int main(){
    int x,y;
    cout<<"enter two number:";
    cin>>x>>y;
    test obj(x,y);
    obj.display();
    obj.swap();
    return 0;
}