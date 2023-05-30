#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first = NULL;

void sortedInsert(struct node **H,int x){
    struct node *t,*q=NULL,*p=*H;
    t = new node;
    t->data = x;
    t->next = NULL;

    if(*H==NULL){
        *H = t;
    }
    else{
        while(p && p->data<x){
            q = p;
            p= p->next;
        }
        if(p==first){
            t->next = first;
            first = t;
        }
        else{
            t->next = q->next;
            q->next = t;
        }
    }
}
struct node *search(struct node *p,int key){
    while(p!=NULL){
        if(key==p->data){
            return p;
        }
        p=p->next;
    }
    return NULL;
}

int main()
{
    struct node **HT[10];
    struct node *temp;
    for(int i=0;i<10;i++){
        HT[i]=NULL;
    }
    sortedInsert(HT,12);
    sortedInsert(HT,22);
    sortedInsert(HT,42);

    temp = search(HT[hash(22)],22);
    cout<<temp->data;
    
    return 0;
}