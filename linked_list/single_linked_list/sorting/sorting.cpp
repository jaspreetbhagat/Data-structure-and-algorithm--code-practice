#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first;
void display(struct node *ptr){
    while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
}
void create(int a[],int n){
    struct node *temp,*last;
    // head = (struct node *)malloc(sizeof(struct node));
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
int is_sorting(struct node *ptr){
    ptr = first;
    int x =INT32_MIN;
    while(ptr!=NULL){
        if(ptr->data<x)
            return 0;
        else{
            x = ptr->data; 
            ptr=ptr->next;
        }
    }
    return 1;
}
int main()
{
    int s;
    int a[]={10,20,30,3,50};
    create(a,5);
    display(first);
    cout<<endl;
    s = is_sorting(first);
    if(s){
        cout<<"the linked list is sorted";
    }
    else{
        cout<<"the linked  list is not sorted";
    }
     
    return 0;
}