#include<iostream>
using namespace std;
struct node{
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
        temp = new node;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
int max(struct node *ptr){
    int max = INT32_MIN;
    // cout<<INT32_MIN;
    while(ptr){
        if(ptr->data>max){
            max = ptr->data;
        }
        ptr=ptr->next;
    }
    return(max);
}
int min(struct node *ptr){
    int min = INT32_MAX;
    // cout<<INT32_MAX;
    while(ptr){
        if(ptr->data<min){
            min = ptr->data;
        }
        ptr=ptr->next;
    }
    return(min);
}
int rec_max(struct node *p){
    int x=0;
    if(p==0)
        return INT32_MIN;
    else{
        x = rec_max(p->next);
        if(p->data>x){
            return p->data;
        }
        else{
            return x;
        }
    }
}
int rec_min(struct node *p){
    int x=0;
    if(p==0)
        return INT32_MAX;
    else{
        x = rec_min(p->next);
        if(p->data<x){
            return p->data;
        }
        else{
            return x;
        }
    }
}
int main()
{
    int a[]={8,3,7,12,45,10,67};
    create(a,7);
    cout<<"max: "<<max(first);
    cout<<"min: "<<min(first);
    cout<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"max: "<<rec_max(first);
    cout<<"min: "<<rec_min(first);
    return 0;
}