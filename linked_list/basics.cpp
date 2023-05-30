#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;//self refrential 
};

// ptr = (struct node *)malloc(sizeof(struct node)); //;--->dynamic allocation in c
//dynamic allocation in C++
// class node{
//     public:
//         int data;
//         node *next;
// };

int main()
{
    //for checking poining to nothing 
    // if(p==NULL)  :--->struct node *ptr = 0;
    // if(p==0) :--->struct node *ptr = 0;
    // if(!p) :--->struct node *ptr = 0;
    //for checking pointing to  value 
    // if(p!=NULL)  :--->struct node *ptr = NULL;
    // if(p!=0) :--->struct node *ptr = NULL;
    // if(p) :--->struct node *ptr = NULL;
    //for checking next node
    // if(p->next==NULL) && if(p->next!=NULL)
    
    struct node *head;
    head = new node;
    head->data =10;
    head = head->next;
    
    return 0;
}