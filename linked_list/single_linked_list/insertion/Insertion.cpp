#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first;
void create(int a[],int n){
    struct node *temp,*last;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for(int i=1;i<n;i++){
        temp =new node;
        temp->data = a[i];
        temp->next =NULL;
        last->next = temp;
        last = temp;
    }
}
void display(struct node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int count(struct node *ptr){
    if(ptr==0)
        return 0;
    else
        return count(ptr->next)+1;
}
void insert(struct node *ptr,int index,int x){
    struct node *newnode;
    if(index<0 || index>count(ptr) ){
        return;
    }
    newnode = new node;
    newnode->data = x;
    if(index==0){
        newnode->next = first;
        first=newnode;
    }
    else{
        for(int i=0;i<index-1;i++){
            ptr= ptr->next;
        }
        newnode->next = ptr->next;
        ptr->next = newnode;
    }
}
int main()
{
    int a[]={3,5,7,2};
    create(a,4);
    display(first);
    cout<<endl<<"-----------------"<<endl;
    insert(first,0,10);
    display(first);
    cout<<endl<<"-----------------"<<endl;
    insert(first,5,10);
    display(first);
    cout<<endl<<"-----------------"<<endl;
    insert(first,6,10);
    display(first);
    cout<<endl<<"-----------------"<<endl;
    insert(first,7,10);
    display(first);
    cout<<endl;
    return 0;
}