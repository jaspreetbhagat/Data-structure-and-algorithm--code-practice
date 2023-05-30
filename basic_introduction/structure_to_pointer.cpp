#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
void display(struct rectangle r){
    cout<<"the length: "<<r.length<<"the breadth "<<r.breadth;
}
int area(struct rectangle *r){
    cout<<r->breadth*r->length;
}
int area(struct rectangle r){
    cout<<r.breadth*r.length;
}
//function can return a pointer using structure
struct rectangle *fun(){
    struct rectangle *p;
    p = new rectangle;
    p->length = 30;
    p->breadth = 40;
    //p = (Struct rectangle*)malloc(sizeof(struct rectangle));
    return p;
}
int main()
{
    struct rectangle j;
    cout<<"enter the length and breadth:";
    cin>>j.length>>j.breadth;
    display(j);
    cout<<endl;
    cout<<"the area of the rectangle is(using message passing):";
    area(j);
    cout<<endl;
    cout<<"the area of the rectangle is(using pointers):";
    area(&j);
    cout<<endl;
    cout<<"using function------"<<endl;
    struct rectangle *ptr;
    ptr= fun();
    cout<<"the length: "<<ptr->length<<"the breadth "<<ptr->breadth;

    return 0;
}
