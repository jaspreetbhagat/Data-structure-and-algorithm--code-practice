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
void duplicate(struct node *p){
    struct node *q ;
    q = p->next;
    while(q!=NULL){
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }
        else{
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
}
int main()
{
    int a[]={10,20,20,20,30,40,50};
    create(a,7);
    duplicate(first);
    display(first);
    return 0;
}