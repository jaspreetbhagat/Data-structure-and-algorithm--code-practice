#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first,*last =NULL;
void display(struct node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
void insert(struct node *p,int key){
    struct node *temp;
    struct node *q =NULL;
    temp = new node;
    temp->data = key;
    temp->next = NULL;
    if(first==NULL){
        first = temp;
    }
    else{
        while(p!=NULL&& p->data<key){
            q=p;
            p = p->next;
        }
        if(p==first){
            temp->next =first;
            first =temp;
        }
        else{
            temp->next = q->next;
            q->next = temp;
        }
    }
}
void insertlast(int x){
    struct node *temp;
    temp = new node;
    temp->data = x;
    temp->next = NULL;
    if(first==NULL)
        first=last=temp;
    else{
        last->next = temp;
        last =temp;
    }
}
int main()
{
    insertlast(3);
    insertlast(7);
    insertlast(9);
    insertlast(15);
    insertlast(20);
    display(first);
    insert(first,18);
    cout<<endl<<"----------"<<endl;
    display(first);

    
    return 0;
}