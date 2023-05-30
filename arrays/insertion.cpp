#include<iostream>
using namespace std;
void display(int a[20],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}
//insertion at the beginning
void insert_at_beg(int a[20],int size){
    int item;

        cout<<endl;
        cout<<"enter the element you need to insert";
        cin>>item;
        for(int i=size;i>0;i--){
            a[i+1]=a[i];
        }
        a[0]= item;
        size++;
        cout<<"altered array will be:"<<endl;
        for(int i=0;i<size;i++){
            cout<<a[i]<<" ";
        }

    }

//insertion at the end
void insert_at_end(int a[20],int size){
    int item;
    cout<<endl;
    cout<<"enter the element you need to insert";
    cin>>item;
    a[size]=item;
    cout<<"altered array will be:"<<endl;
    for(int i=0;i<size+1;i++){
        cout<<a[i]<<" ";
    }
}

//insertion at at particular index

void insert_at_index(int a[20],int size){
    int index,item;
    cout<<endl;
    cout<<"enter the index of the number:";
    cin>>index;
    for (int i = index+1; i>0; i--){
        a[i+1]=a[i];
    }
    cout<<"enter the element you need to insert";
    cin>>item;
    a[index]=item;
    cout<<"altered array will be:"<<endl;
    for(int i=0;i<size+1;i++){
        cout<<a[i]<<" ";
    }

}
void insert_in_sort(int a[],int size){
    int item;
    cout<<"enter the element you need to insert";
    cin>>item;
    int i = size-1;

    while(a[i]>item){
        a[i+1]=a[i];
        i--;
    }
    a[i+1] = item;
    cout<<"altered array will be:"<<endl;
    for(int i=0;i<size+1;i++){
        cout<<a[i]<<" ";
    }
}
bool is_sorted(int a[],int size){
    for(int i=0;i<size-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }
        return true;
    }

}
int main()
{
    int ch,size,a[20];
    cout<<"enter the size of array:";
    cin>>size;
    cout<<"enter "<<size<<"  elements in the array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"-------You entered-----"<<endl;
    display(a,size);
    cout<<"\nenter 1: imsertion at begn\n enter 2: insertion at an indeex \n enter 3: inertion at the end \n4.insertion_At_Sort\n5.check the sorted array.\n6.";
    cin>>ch;
    switch (ch)
    {
        int r;
    case 1:
        insert_at_beg(a,size);
        break;
    case 2:
        insert_at_index(a,size);
        break;
    case 3:
        insert_at_end(a,size);
        break;
    case 4:
        insert_in_sort(a,size);
        break;
    case 5:
        int j = is_sorted(a,size);
        if(j == true){
            cout<<"array is sorted!";
        }
        else{
            cout<<"array is not sorted!";
        }
        return 0;

        break;
    default:
        cout<<"enter the valid choice.";
        break;
    }
    
    return 0;
}