#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
} *first;
void display(struct node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
void create(int a[],int n){
    struct node *temp,*last;
    first =new node;
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
int sum(struct node *ptr){
    int sum = 0;
    while(ptr!=NULL){
        sum+= ptr->data;
        ptr=ptr->next;
    }
    return(sum);
}
int rsum(struct node *p){
    if(p==0)
        return 0;
    else{
        return rsum(p->next)+p->data;
    }
}
int main()
{
    int a[] ={8,3,7,12,9};
    create(a,5);
    display(first);   
    cout<<"sum : "<<rsum(first); 
    return 0;
}