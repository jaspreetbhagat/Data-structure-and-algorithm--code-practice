//every open paranthesis has a closing.

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
struct node{
    char data;
    struct node *next;
}*top=NULL;
void push(char x){
    struct node *temp = new node;
    if(temp == NULL){
        cout<<"stack is full";
    }
    else{
        temp->data = x;
        temp->next = top;
        top = temp;
    }
}
char pop(){
    int x = -1;
    struct node *p;
    if(top==NULL){
        cout<<"stack is empty";
    }
    else{
        p =top;
        top = top->next;
        x = p->data;
        delete p;
    }
    return x;
}
void display(){
    struct node *ptr;
    ptr = top;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr= ptr->next;
    }
    cout<<endl;
}
int isbalance(char *exp){
    // struct stack st;
    //initialising the stack
    // st.size = strlen(exp);
    // st.top =-1;
    // st.arr = new char[st.size];
    //
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='(')
            push(exp[i]);
        else if(exp[i]==')'){
            if(top==NULL)
                return 0;
            pop();
        }
    }
    if(top==NULL)
        return 1;
    else    
        return 0;
}

int main()
{
    char *exp="((a+b)*(c-d))";
    cout<<isbalance(exp)<<endl;

    return 0;
}