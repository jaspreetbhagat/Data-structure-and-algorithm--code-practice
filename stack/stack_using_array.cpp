#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int top;
    int *arr;
    int ch;
    int isfull();
    int isempty();
    int pop();
    int push(int);
    int peek();
    int element_at_given_index(int);
    int display();


};
int stack::isfull(){
    if(top==size-1)
        return 1;
    else
        return 0;
}
int stack::isempty(){
    if(top==-1)
        return 1;
    else
        return 0;
}
int stack::push(int item){
    if(isfull()){
        cout<<" Stack Overflow"<<endl;
  
    }
    else{
        top++;
        arr[top]=item;
    }
}
int stack::pop(){
    int x=-1;
    if(isempty()){
        cout<<" Stack Underflow"<<endl;
    }
    else{
        x=arr[top];
        top--;
    }
    return x;
}

int stack::peek(){
    if(isempty()){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        return arr[top];
    }
}
//index = top-pos+1 (e.g:- 3-2+1=2)
int stack::element_at_given_index(int pos){
    int value = -1;
    int x;
    x = top-pos+1;
    if(x<0){
        cout<<"invalid position";
    }
    else{
        value = arr[x];
    }
    return value;
}
int stack::display(){
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int item;
    stack obj;
    cout<<"enter the size of stack:"<<endl;
    cin>>obj.size;
    //creating the array of given size dynamically.
    obj.arr = new int[obj.size];
    obj.top = -1;
    while(1){
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"1.push"<<endl<<"2.pop"<<endl<<"3.peek"<<endl<<"4.element at given index"<<endl<<"5.display"<<endl<<"6.quit"<<endl;
        cout<<"enter your choice:"<<endl;
        cout<<"-----------------------------"<<endl;
        cin>>obj.ch;
        switch(obj.ch){
            case 1:
                cout<<"enter the item you need to insert:"<<endl;
                cin>>item;
                obj.push(item);
                obj.display();
                break;
            case 2:
            if(obj.pop()==-1){
                cout<<"nothing is deleted";
            }
            else{
                cout<<"the popped item is:"<<obj.pop();
            }
            break;
            case 3:
            cout<<"the topmost element is:"<<obj.peek();
            break;
            case 4:
            int index;
            //finding the element at a given index:
            cout<<"enter the index:"<<endl;
            cin>>index;
            cout<<obj.element_at_given_index(index);
            break;
            case 5:
            cout<<"the elements are:"<<endl;
            obj.display();
            break;
            case 6:
            exit(1);
            default:
            cout<<"enter a valid choice:"<<endl;
            break;
        }

    }
    return 0;
}