#include<iostream>
using namespace std;

int main()
{
    int n,a[20];
    cout<<"enter how many number you need in the array:"<<" ";
    cin>>n;
    cout<<"enter the elements in the array:"<<endl;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    //for displaying
    cout<<"-----You entered-----"<<endl;
    for(int i=0;i<n;i++){
        // cout<<" "<<a[i];
        //or
        cout<<"element at "<<i<<"  position is= "<<a[i]<<endl;
    }
    return 0;
}