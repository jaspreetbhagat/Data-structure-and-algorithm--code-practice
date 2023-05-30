//wap to find the sum of two numbers enter by the user and swap two numbers.
#include<iostream>
using namespace std;
struct input{
    int a;
    int b;
};
struct input initialize(struct input *r){
    cout<<"enter two numbers:";
    cin>>r->a>>r->b;
}
struct input display(struct input r){
    cout<<"a= "<<r.a<<endl;
    cout<<"b= "<<r.b<<endl;
}
struct input swap(struct input *r){
    int temp;
    temp = r->a;
    r->a = r->b;
    r->b = temp;
}
int main()
{
    struct input ptr;
    initialize(&ptr);
    display(ptr);
    swap(&ptr);
    cout<<"--------"<<endl;
    display(ptr);
    return 0;
}