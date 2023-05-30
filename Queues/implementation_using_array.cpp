#include<iostream>
using namespace std;
struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};
// int isfull(){
//     if(q->rear == q->size-1)
//         return 1;
//     return 0;
// }
// int isempty(){
//     if(front==rear)
//         return 1;
//     return 0;
// }
void enqueue(struct queue *q,int x){
    if(q->rear == q->size-1)
        cout<<"queue is full";
    else{
        q->rear++;
        q->arr[q->rear]=x;
    }
}
int dequeue(struct queue *q){
    int x = -1;
    if(q->front==q->rear)
        cout<<"queue is empty";
    else{
        q->front++;
        x = q->arr[q->front];
    }
    return x;
}
void create(struct queue *q,int size){
    q->size = size;
    q->front = q->rear = -1;
    q->arr = new int[q->size];
}
void display(struct queue q){
    for(int i=q.front+1;i<=q.rear;i++){
        cout<<q.arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    struct queue q;
    create(&q,5);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    display(q);
    cout<<"the popped element is :"<<dequeue(&q);
    return 0;
}



//drawbacks:-
// insertion is done at the rear end so even if the whole queue is empty but the rear is pointing at the last element then the queue is full acording to our algorithm.we cannot utilize the leftover space.
// we can use each space only one time
// solution:-
// 1.resetling pointers.
// 2. circular queue