#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *next;
}*first;
void create(int a[],int n){
    struct node *temp,*last;
    first = new node;
    first->data = a[0];
    first->next =NULL;
    last = first;
    for(int i=1;i<n;i++){
        temp= new node;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
void display(struct node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int count(struct node *ptr){
    if(ptr==0)
        return 0;
    else    
        return count(ptr->next)+1;
}
//deleting first node.
// void deletion_01(){
//     int x;
//     struct node *ptr = first;
//     first = first->next;
//     x = ptr->data;
//     cout<<"the deleted number is: "<<x<<endl;
//     delete(ptr);
// }
//deleting a node at a given position.
int deletion_02(struct node *p,int index){
    struct node *q = NULL;
    int x=-1;
    if(index<1 &&index>count(p))
        return -1;
    if(index==1){
        q=first;
        x = first->data;
        first = first->next;
        // cout<<"the deleted number is: "<<x<<endl;
        free(q);
        return x;
    }
    else{
        p = first;
        q=NULL;
        for(int i=0;i<index-1 && p;i++){
            q = p;
            p=p->next;
        }
        if(p){
            q->next = p->next;
            x = p->data;
            // cout<<"the deleted number is: "<<x<<endl;
            delete(p);
            return x;
        }
    }
}
int main()
{
    int s;
    int a[] = {3,5,10,45,23,67,23};
    create(a,7);
    display(first);
    cout<<endl<<"-----------"<<endl;
    s = deletion_02(first,5);
    if(s==-1){
        cout<<"deleted element is not found!"<<endl;
    }
    else{
        cout<<"deleted element is :"<<s<<endl;

    }
    cout<<endl<<"-----------"<<endl;
    display(first);

    return 0;
}