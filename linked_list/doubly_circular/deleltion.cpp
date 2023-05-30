#include<iostream>
using namespace std;
struct node{
    struct node *prev;
    int data;
    struct node *next;
}*first;
void create(int a[],int n){
    struct node *temp,*last;
    first = new node;
    first->data=a[0];
    first->prev = first->next = NULL;
    last=first;
    for(int i=1;i<n;i++){
        temp = new node;
        temp->data  = a[i];
        temp->next = last->next;
        temp->prev = last;
        last->next = temp;
        last = temp;
    }
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
void display(struct node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int deletion(struct node *ptr,int index){
    // struct node *temp;
    int x = -1;
    ptr = first;
    if(index<0 || index>length(ptr))
        return -1;
    if(index == 0){
        first = first->next;
        if(first){
            first->prev = NULL;
        }
        x = ptr->data;
        free(ptr);
    }
    else{
        for(int i=0;i<index-1;i++){
            ptr=ptr->next; 
        }
        ptr->prev->next  = ptr->next;
        if(ptr->next){
            ptr->next->prev = ptr->prev;
        } 
        x = ptr->data;
        free(ptr);  
    }
    return x;
}
int main() 
{
    
    int a[] = {20,30,40,50,60};
    create(a,5);
    display(first);
    deletion(first,5);
    display(first);
    return 0;
}