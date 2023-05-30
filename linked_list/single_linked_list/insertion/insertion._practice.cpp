#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first,*last =NULL;
void create(int a[],int n){
    struct node *temp,*last;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for(int i=1;i<n;i++){
        temp = new node;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
int count(struct node *ptr){
    if(ptr==0)
        return 0;
    else
        return count(ptr->next)+1;
}
void display(struct node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
void insert(struct node *ptr,int index,int key){
    struct node *temp;
    if(index<0 &&index>count(ptr)){
        return;
    }
    temp = new node;
    temp->data = key;
    // temp->next = NULL;
    if(index==0){
        temp->next = first;
        first = temp;
    }
    else{
        for(int i=0;i<index-1;i++){
            ptr=ptr->next;
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }

}
void insert_last(struct node *ptr,int key){
    struct node *temp;
    temp = new node;
    temp->data = key;
    temp->next= NULL;
    if(first == NULL){
        first = last = temp;
    }
    else{
        last->next = temp;
        last=temp;
    }

}
void sorted_insert(struct node *ptr,int key){
    struct node *temp;
    struct node *q = NULL;
    temp = new node;
    temp->data = key;
    temp->next = NULL;
    if(first== NULL){
        first = temp;
    }
    else{
        while(ptr!=NULL && ptr->data<key){
            q=ptr;
            ptr= ptr->next;
        }
        if(ptr==first){
            temp->next = first;
            first= temp;
        }
        else{
            temp->next = q->next;
            q->next = temp;

        }
    }
}
int main()
{
    int a[] = {12,23,34,45,56,67};
    create(a,6);
    sorted_insert(first,44);
    display(first);
    
    return 0;
}