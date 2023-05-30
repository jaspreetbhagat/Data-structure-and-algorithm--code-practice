#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first;
//revering the display of the linked list
void display(struct node *ptr){
    if(ptr!=NULL){
        cout<<ptr->data<<" ";
        display(ptr->next);
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

void reversing_array(struct node *ptr){
    int i;
    ptr = first;
    int a[50];
    while(ptr!=NULL){
        a[i]=ptr->data;
        ptr = ptr->next;
        i++;
    }
    ptr= first;
    i--;
    while(ptr!=NULL){
        ptr->data=a[i--];
        ptr=ptr->next;
    }
}
//reversing_using_sliding pointer

int main()
{
    int a[]={10,20,20,20,30,40,50};
    create(a,7);
    reversing_array(first);
    display(first);
    return 0;
}