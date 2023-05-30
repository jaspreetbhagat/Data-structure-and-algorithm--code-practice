#include<iostream>
using namespace std;
struct node{
    struct node *lchild;
    struct node *rchild;
    int data;
}*root =NULL;
void insert(struct node *ptr,int key){
    struct node *temp,*tail;
    if(root==NULL){
        temp = new node;
        temp->data = key;
        temp->lchild = temp->rchild = NULL;
        root = p;
        return;
    }
    while(ptr!=NULL){
        tail = ptr;
        if(key<ptr->data)
            ptr = ptr->lchild;
        else if(key>ptr->data)
            ptr=ptr->rchild;
        else    
            return;
    }
    temp = new node;
    temp->data = key;
    temp->lchild=
    temp->rchild = NULL;
    if(key<tail->data)
        tail->lchild=p;
    else    
        tail->rchild= p;
    
}

//deletion:-
// 1. when node have no child.
// 2. when node have one child.
// 3. when node have two child.




void inorder(struct node *ptr){
    while(ptr){
        return inorder(ptr->lchild);
        cout<<ptr->data;
        return inorder(ptr->rchild);
    }
}
int main()
{
    
    return 0;
}