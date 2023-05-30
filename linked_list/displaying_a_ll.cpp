#include<iostream>
#include<stdlib.h>
using namespace std;

//200-->(8,210-)-->(3,270-)-->(7,300-)-->(12,350-)-->(9,0);
struct node{
    int data;
    struct node *next;
}*head = NULL;
void display(struct node *ptr){
    while(ptr!=NULL){
            cout<<ptr->data<<"--->";
            ptr = ptr->next;
        }
}

void recursive_display(struct node *ptr){
    if(ptr!=NULL){
        cout<<ptr->data<<" ";
        recursive_display(ptr->next); 
    }
}

void create(int a[],int n){
    struct node *temp,*last;
    head = (struct node *)malloc(sizeof(struct node));
    // first = new node;
    head->data = a[0];
    head->next = NULL;
    last = head;
    for(int i=1;i<n;i++){
        temp = new node;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
int main()
{
    int a[] = {3,5,7,10,15};
    create(a,5);
    display(head);
    // count(head);
    return 0;
}