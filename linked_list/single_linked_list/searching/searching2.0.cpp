//improving the searching in linked list
//1.Transposition
//2. Move to head
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first;
void display(struct node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr= ptr->next;
    }
}
void create(int a[],int n){
    struct node *temp,*last;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for(int i=1;i<n;i++){
        temp =new node;
        temp->data=a[i];
        temp->next =NULL;
        last->next = temp;
        last = temp;
    }
}
//transposition:-replace the key value to the previous value
//move to head:- head is pointing to the key node
node * searching_pro(struct node *ptr,int key){
    struct node *q = NULL;
    while(ptr!=NULL){
        if(ptr->data==key){
            q->next = ptr->next;
            ptr->next = first;
            first = ptr;
            return ptr; 
        }
        q=ptr;
        ptr = ptr->next;
    }
}
int main()
{
    struct node *temp;
    int a[]={3,5,7,0,25,8,32,2};
    create(a,8);
    display(first);
    cout<<endl;
    temp = searching_pro(first,32);
    temp = searching_pro(first,8);
    if(temp)
        cout<<"key is found "<<temp->data;
    else
        cout<<"key is not found ";
    
    cout<<endl;
    cout<<"here the key element is shifted to the first element"<<endl;
    display(first);
    return 0;
}