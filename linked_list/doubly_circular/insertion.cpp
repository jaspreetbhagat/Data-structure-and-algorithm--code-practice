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
void insert_at_given_index(struct node *ptr,int item,int index){
    struct node *temp;
    temp = new node;
    temp->data = item;
    if(index< 0 || index>length(ptr))
        // cout<<"enter a valid index"<<endl;
        return;
    if(index == 0){
        temp->prev = NULL;
        temp->next = first;
        first->prev = temp;
        first = temp;
    }
    else{
        for(int i=0;i<index-1;i++){
            ptr = ptr->next;
        }
        temp->prev = ptr;
        temp->next = ptr->next;
        if(ptr->next!=NULL){
            ptr->next->prev = temp;
        }
        ptr->next = temp;
    }

}
int main()
{
    int a[] = {2,4,5,6,7};
    create(a,5);
    display(first);
    // cout<<"the length of the linked list: "<<length(first);
    insert_at_given_index(first,69,5);
    display(first);
    return 0;
}