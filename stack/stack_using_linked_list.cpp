#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *next;
}*top = NULL;
void push(int x){
    struct node *t;
    t = new node;
    if(t == NULL)
        cout<<"stack is full"<<endl;
    else{
        t->data=x;
        t->next = top;
        top = t;
    }
    
}
int pop(){
    int x = -1;
    struct node *p;
    if(top==NULL)
        cout<<"stack is empty"<<endl;
    else{
        p = top;
        top = top->next;
        x = p->data;
        free(p);
    }
    return x;

}
int peek(int pos){
    struct node *ptr =top;
    for(int i=0;ptr!=NULL&&i<pos-1;i++)
            ptr=ptr->next;
    if(ptr!=NULL)
        return ptr->data;
    else
        return -1;
}
int stacktop(){
    if(top)
        return top->data;
    return -1;
}
int isempty(){
    return top?0:1;
}
int isfull(){
    struct node *t = new node;
    int r=t?1:0;
    free(t);
    return r;
}
void display(){
    struct node *ptr;
    ptr = top;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

int main()
{
    push(10);
    push(20);
    push(30);
    cout<<endl;
    display();
    cout<<endl<<"popped element: "<<pop();
    cout<<endl;
    cout<<peek(0);
    cout<<endl;
    cout<<isfull();
    cout<<endl;
    cout<<isempty();
    return 0;
}