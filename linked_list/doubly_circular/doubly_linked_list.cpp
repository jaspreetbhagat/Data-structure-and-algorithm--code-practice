// /we can acess element bidirectionally
//we can  move in both direction
#include<iostream>
using namespace std;
struct node{
    struct node *prev;
    int data;
    struct node *next;
}*first = NULL;
void create(int a[],int n){
    struct node *temp,*last;
    first = new node;
    first->prev = NULL;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for(int i=1;i<n;i++){
        temp = new node;
        temp->data = a[i];
        temp->next = last->next;
        temp->prev = last;
        last->next = temp;
        last = temp;
    }
}
void display(struct node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

int length(struct node *ptr){
    // int len = 0;
    // while(p){
    //     len++;
    //     p=p->next;
    // }
    // return len;
    if(ptr == 0)
        return 0;
    else
        return length(ptr->next)+1;
}
int main()
{
    int a[] = {2,4,5,6,7};
    create(a,5);
    display(first);
    cout<<"the length of the linked list: "<<length(first);
    return 0;
}