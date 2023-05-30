#include<iostream>
#include<stdlib.h>
using namespace std;
struct array{
    int size;
    int a[20];
};
struct array input(struct array *arr){
    cout<<"enter the size of array:"<<endl;
    cin>>arr->size;
    cout<<"enter "<<arr->size<<" numbers in the array:"<<endl;
    for(int i=0;i<arr->size;i++){
        cin>>arr->a[i];
    }
}
struct array display(struct array *arr)
{
    cout<<"------You entered--------"<<endl;
    for(int j=0;j<arr->size;j++){
    cout<<arr->a[j]<<" ";

    }
}

struct array insertion_at_end(struct array *arr){
    //insertion at the end
    int item;
    cout<<endl;
    cout<<"enter the element you want to insert:"<<endl;
    cin>>item;
    arr->a[arr->size]=item;
    for(int i=0;i<=(arr->size);i++){
        cout<<arr->a[i]<<" ";
    }  
}
struct array insertion_at_beg(struct array *arr){
    //insertion at the beg
    int item;
    cout<<endl;
    cout<<"enter the element you want to insert:"<<endl;
    cin>>item;
    for(int i=0;i<=arr->size;i++){
        arr->a[i+1]=arr->a[i];
    }
    arr->a[0]=item;
    for(int i=0;i<=(arr->size);i++){
        cout<<arr->a[i]<<" ";
    }  
}

struct array insertion_at_index(struct array *arr){

    int index,item;
    cout<<endl;
    cout<<"enter the index of the number:";
    cin>>index;
    cout<<"enter the element you need to insert";
    cin>>item;
    for(int i=arr->size;i>=index;i--){
        arr->a[i]=arr->a[i-1];
    }
    arr->a[index]=item;
    cout<<"altered array will be:"<<endl;
    for(int i=0;i<=arr->size;i++){
        cout<<arr->a[i]<<" ";
    }
}

int main()
{
    struct array aa;
    int ch;

    input(&aa);
    display(&aa);
    while(ch!=4){
    cout<<"\nselect the type of insertion you need in the list!";
    cout<<"\n\t1.insertion at end\n\t2.insertion at beg\n\t3.insertion at index\n\t4.quit"<<endl;
    cin>>ch;

    switch(ch){
        case 1:
        insertion_at_end(&aa);
        break;
        case 2:
        insertion_at_beg(&aa);
        break;
        case 3:
        insertion_at_index(&aa);
        case 4:
        break;
        default:
        cout<<"enter a valid choice!";   
        break;
    }
    }
    return 0;
}