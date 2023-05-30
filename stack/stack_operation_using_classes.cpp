#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node *next;
};
class stack{
    private:
        node *top;
    public:
        stack(){
            top =NULL;
        }
        void push(int x);
        int pop();
        void display();
};
void stack::push(int x){
    node *temp = new node;
    if(temp==NULL)
        cout<<"stack is full"<<endl;
    else{
        temp->data = x;
        temp->next=top;
        top=temp;
    }
}
int stack::pop(){
    int x =-1;
    if(top==NULL)
        cout<<"stack is empty"<<endl;
    else{
        x = top->data;
        node *temp = top;
        top = top->next;
        delete temp;
    }
    return x;
}
void stack::display(){
    node *ptr = top;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}
int main()
{
    stack obj;
    obj.push(12);
    obj.push(23);
    obj.push(34);
    obj.push(45);
    obj.display();
    cout<<"the popped element is :"<<obj.pop()<<endl;
    obj.display();

    return 0;
}