
//binary search tree will not have duplicates.
//we get the sorted order of the elements when we did the inorder traversal of the tree.
//no of binary trees for n nodes:  catalan number
                            //T(n) = 2*nCn/n+1




#include<iostream>
using namespace std;

struct node{
    struct node *lchild;
    struct node *rchild;
    int data;
}*root=NULL;
void insertion(int key){
    struct node *t = root;
    struct node *r,*p;//tailing pointer.
    if(root=NULL){
        p = new node;
        p->data = key;
        p->lchild =p->rchild =NULL;
        root = p;
        return;
    }
    while(t!=NULL){
        r = t;
        if(key<t->data)
            t = t->lchild;
        else if(key>t->data)
            t = t->rchild;
        else
            return;
    }
    p = new node;
    p->data = key;
    p-> lchild = p->rchild = NULL;
    if(key<r->data){
        r->lchild = p;
    }
    else{
        r->rchild = p;
    }
}
int deletion(struct node *ptr,int key){
    

}
void inorder(struct node*p){
    if(p){
        inorder(p->lchild);
        cout<<p->data;
        inorder(p->rchild);
    }
}
Rsearch(node *t, int key){
    if(t==NULL)
        return NULL;
    if(key==t->data)
        return t;
    else if(key<t->data)
        return Rsearch(t->leftchild,key);
    else
        return Rsearch(t->rightchild,key);
}


struct node * search(node *t,int key){
    while(t!=NULL){
        if(key == t->data)
            return t;
        else if(key<t->data)  
            t = t->lchild;
        else    
            t= t->rchild;
    }
    return NULL;
}

int main()
{
    insertion(10);
    insertion(2);
    insertion(20);
    insertion(50);
    insertion(75);
    insertion(8);
    inorder(root);
    cout<<" ";

    
    return 0;
}