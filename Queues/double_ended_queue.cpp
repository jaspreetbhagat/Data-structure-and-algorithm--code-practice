//DEqueue
// insertion_from_front
// insertion_from_rear
// deletion_from_front
// deletion_from_rear

#include<iostream>
using namespace std;
class dequeue{
    int size;
    int front;
    int rear;
    int *arr;
    public:
    dequeue(int size);
    ~dequeue();
    int isfull();
    int isempty();
    void display();
    void enqueueFront(int x);
    void enqueueRear(int x);
    int dequeueFront();
    int dequeueRear();

};
dequeue::dequeue(int size){
    this->size = size;
    front = -1;
    rear = -1;
    arr = new int[size];
}
 
dequeue::~dequeue() {
    delete [] arr;
}
int dequeue:: isempty(){
    if(front==rear)
        return 1;
    else
        return 0;
}
int dequeue::isfull(){
    if(rear == size-1)
        return 1;
    else
        return 0;
}
void dequeue::enqueueRear(int x){
    if(isfull())
        cout<<"queue is full"<<endl;
    else{
        rear++;
        arr[rear] = x;
    }
}
void dequeue::enqueueFront(int x){
    if(front==-1)
        cout<<"dequeue overflow"<<endl;
    else{
        arr[front] = x;
        front--;
    }
}
int dequeue::dequeueFront(){
    int x=-1;
    if(isempty())
        cout<<"queue underflow"<<endl;
    else{
        x = arr[front];
        front++;
    }
    return x;
}
int dequeue::dequeueRear(){
    int x =-1;
    if(rear == -1)  
        cout<<"queue underflow"<<endl;
    else{
        x = arr[rear];
        rear--;
    }
}
void dequeue::display(){
    for(int i=front+1;i<=rear;i++){
        cout<<arr[i]<<" ";
        if(i<rear){
            cout<<" <- "<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int a[] = {1,3,5,6,9};
    int b[] = {2,4,6,8};
    int size = sizeof(a)/sizeof(a[0]);
    dequeue deq(size);

    for (int i=0; i<size; i++){
        deq.enqueueRear(a[i]);
    }
    deq.display();
    deq.enqueueRear(11);

    for (int i=0; i<size; i++){
        deq.dequeueFront();
    }
    deq.dequeueFront();

    for (int i=0; i<size; i++){
        deq.enqueueFront(b[i]);
    }
    deq.display();
    deq.enqueueFront(10);
    for (int i=0; i<size; i++){
        deq.dequeueRear();
    }
    deq.display();
    deq.dequeueRear();
    return 0;
}