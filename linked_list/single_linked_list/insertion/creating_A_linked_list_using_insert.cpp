#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first=NULL,*last =NULL;
void display(struct node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr =ptr->next;
    }
}
int count(struct node *p){
    if(p==0)
        return 0;
    else{
        return count(p->next)+1;
    }
}
void insert(struct node *ptr,int index,int item){
    struct node *newnode;
    if(index<0 || index>count(ptr))
        return;
    newnode = new node;
    newnode->data= item;
    if(index==0){
        newnode->next = first;
        first = newnode;
    }
    else{
        for(int i=0;i<index-1;i++){
            ptr=ptr->next;
        }
        newnode->next =ptr->next;
        ptr->next = newnode;
    }
}
//always insert at the end.
void insertlast(int x){
    struct node *temp;
    temp = new node;
    temp->data = x;
    temp->next = NULL;
    if(first==NULL)
        first=last=temp;
    else{
        last->next = temp;
        last =temp;
    }
}
int main()
{
    // int n,a[20];
    // cout<<"enter the number of elements:"<<endl;
    // cin>>n;
    // cout<<"enter the elements:"<<endl;
    // // for(int j=0;j<n;j++){
    // //     cin>>a[i];
    // // }
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    //     insert(first,i,a[i]);
    // }
    insertlast(45);
    insertlast(56);
    cout<<"the linked list is:"<<endl;
    display(first);
    return 0;
}