#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breadth;
    public:

    rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    void initialize(){
        cout<<"enter the dimesnsions of the rectangle:"<<endl;
        cin>>length>>breadth;
    }
    int area(){
        return length*breadth;
    }
    int parameter(){
        return 2*(length+breadth);
    }
};
int main()
{

    rectangle obj(0,0);
    obj.initialize();
    cout<<"the area of the rectangle is : "<<obj.area()<<endl;
    cout<<"the parameter of the rectangle is : "<<obj.parameter();
    return 0;
}