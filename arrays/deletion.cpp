#include<iostream>
using namespace std;
class deletion{
    int size;
    int a[20];
    public:
    void info();
    void delete_at_beg();
    void delete_at_end();
    void delete_at_index();
    void delete_a_particular();
};
void deletion::info(){
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;
    cout<<"enter "<<size<<" elements in the array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }

    cout<<"-----------you entered-----------"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    
}

void deletion::delete_at_beg(){
    for(int i=0;i<size-1;i++){
        a[i]=a[i+1];
    }
    cout<<"-----------altered entered-----------"<<endl;
    for(int i=0;i<size-1;i++){
        cout<<a[i]<<" ";
    }

}

void deletion::delete_at_end(){
    cout<<"-----------altered entered-----------"<<endl;
    for(int i=0;i<size-1;i++){
        cout<<a[i]<<" ";
    }
}

void deletion::delete_at_index(){
    int index;
    cout<<"enter the index you need to delete"<<endl;
    cin>>index;
    for(int i=index;i<size;i++){
        a[i] = a[i+1];
    }
    cout<<"-----------altered entered-----------"<<endl;
    for(int i=0;i<size-1;i++){
        cout<<a[i]<<" ";
    }
}

void deletion::delete_a_particular(){
    int item,loc =0;
    cout<<"enter the item you want to delete: "<<endl;
    cin>>item;
    for (int i = 0; i < size; i++)
    {
    if(a[i]==item){
        loc = loc+i;
    }
    }
    for(int i=loc;i<size;i++){
        a[i] = a[i+1];
    }
    cout<<"-----------altered entered-----------"<<endl;
    for(int i=0;i<size-1;i++){
        cout<<a[i]<<" ";
    }

}

int main()
{
    deletion obj;
    int ch;
    obj.info();
    while(ch!=5){
    cout<<"\nenter your choice:"<<endl;
    cout<<"\t1.deletion at beg\n\t2.deletion at beg\n\t3.deletion at index\n\t4.delete a particular item\n\t5.exit"<<endl;
    cin>>ch;
    switch(ch){
    case 1:
        obj.delete_at_beg();
        break;
    case 2:
        obj.delete_at_end();
        break;
    case 3:
        obj.delete_at_index();
        break;
    case 4:
        obj.delete_a_particular();
        break;
    case 5:
    break;
    default:
    cout<<"enter a valid choice!"<<endl;
    break;
    }
    }
    return 0;
}