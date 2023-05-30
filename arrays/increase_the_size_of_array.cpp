#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{ 
    int n,n1;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the size of new array";
    cin>>n1;

    int *p = new int[n];
    int *q = new int[n1]; 
    cout<<"enter 5 integers for the first array";
    for (int i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    //copying p array to q
    for(int i =0;i<n1;i++){
        q[i]=p[i];
    }
    //printing new array(q)
    for(int j=0;j<n1;j++){
        cout<<q[j]<<endl;
    }
    cout<<endl;
    //taking the rest of element in the array
    printf("enter the rest of the elements in the new list");
    for(int k =5;k<n1;k++){
        cin>>q[k];
    }
    
    cout<<endl;
    printf("the new array is");
    cout<<endl;
    for(int j=0;j<n1;j++){
        cout<<q[j]<<endl;
    }
    //deleting the previous p
    delete[]p;
    //now p is pointing to q
    p = q;
    //and q is pointing to null
    q = NULL;
    //that means we indirectly change the size of array;
    return 0;
}