//circular queue

#include<iostream>
using namespace std;
struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};
void create(struct queue *q,int size){
    q->size = size;
    q->front = q->rear = 0;//we not gonna use the first space to make the circular queue work.
    q->arr = new int[ s->size];
}
void enqueue(struct queue *q,int x){
    if((q->rear+1)%q->size == q->front)
        cout<<"queue is full";
    else
        q->rear = (q->rear+1)%q->size;
        q->arr[q->rear]=x;
}
int dequeue(struct queue *q){
    int x=-1;
    if(q->rear == q->front)
        cout<<"queue is empty";
    else{
        q->front = (q->front+1)%q->size;
        x = q->arr[q->front];    
    }
    return x;
}
void display(struct queue q){
    int i = q.front+1; 
    do{
        cout<<q.arr[i];
        i = (i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);
    cout<<endl;
}
int main()
{
    struct queue *q;
    create(&q,6);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    return 0;
}