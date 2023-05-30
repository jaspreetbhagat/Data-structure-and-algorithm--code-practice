//binary seawrch can not be performed as we cant find the mid of the array and its not contagious memory.


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
        temp = new node;
        temp->data = a[i];
        temp->next= NULL;
        last->next = temp;
        last = temp;
    }
}
void display(struct node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr= ptr->next;
    }
}
struct node * searching(node *ptr,int key){
    while(ptr!=NULL){
        if(ptr->data==key)
            return(ptr);

        ptr= ptr->next;
    }
    return NULL;
}
struct node * rec_search(node *ptr,int key){
    if(ptr==NULL)
        return NULL;
    if(key==ptr->data)
        return(ptr);
    return rec_search(ptr->next,key);
}
int main()
{
    struct node *temp,*temp1;
    int a[]={3,5,7,10,25,8,32,2};
    create(a,5);
    temp  = searching(first,25);
    temp1 = rec_search(first,5);
    if(temp1){
        cout<<"key is found "<<temp1->data;
    }
    else{
        cout<<"key is not present";
    }
    return 0;
}