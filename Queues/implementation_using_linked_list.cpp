#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*front = NULL,*rear = NULL ;

void enqueue(int x){
    struct node *temp;
    temp = new node;
    if(temp == NULL){
        cout<<"queue is fulll";
    }
    else{
        temp->data = x;
        temp->next = NULL;
        if(front == NULL){
            front=rear=temp;
        }
        else{
            rear->next = temp;
            rear = temp;
        }
    }
}
int dequeue(){
    int x=-1;
    struct node *temp;
    if(front == NULL)
        cout<<"queue is empty"<<endl;
    else{
        temp = front;
        front=front->next;
        x = temp->data;
        free(temp);
    }
    return x;
}
void display(){
    struct node *ptr;
        while(ptr){
            printf("%d",ptr->data);
            ptr=ptr->next;
        }
        cout<<" ";
}
int main()
{
    enqueue(10);
    display();
    enqueue(20);
    display();
    enqueue(30);
    display();
    enqueue(40);
    display();
    enqueue(50);
    display();
    cout<<endl;
    cout<<dequeue();
    return 0;
}