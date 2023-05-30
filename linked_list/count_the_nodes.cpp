#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first;
void display(struct node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr= ptr->next;
    }
}
void create(int a[],int n){
    struct node *temp,*last;
    first =new node;
    first->data=a[0];
    first->next = NULL;
    last=first;
    for(int i=1;i<n;i++){
        temp = new node;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

int count(struct node *p){
    if(p==0)
        return 0;
    else
        return count(p->next)+1;
}

int main()
{
    int a[]= {8,3,7,12,9};
    create(a,5);
    display(first);
    cout<<endl<<"the number of nodes are: "<<count(first)<<endl;
    
    return 0;
}