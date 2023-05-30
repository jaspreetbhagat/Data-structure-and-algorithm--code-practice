#include<iostream>
using namespace std;
struct array{
    int *A;
    int size;
    int length;
};
int main()
{
    struct array arr;
    cout<<"enter the size of an array:"<<endl;
    cin>>arr.size;
    arr.A = new int[arr.size];
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<arr.size;i++){
        cin>>arr.A[i];
    }
    for(int i=0;i<arr.size;i++){
        cout<<arr.A[i]<<" ";
    }
    
    return 0;
}