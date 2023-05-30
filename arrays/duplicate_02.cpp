#include<iostream>
using namespace std;

int main()
{
    int b[20];
    int a[]={3,6,8,8,10,15,15,15,20};
    int max = a[9];
    for(int k=0;k<max;k++){
        b[k]=0;
    }
    for(int i=0;i<21;i++){
        b[a[i]]++;
        if(b[i]>1){
            cout<<i<<" is present in the array for "<<b[i]<<" times."<<endl;
        }
    }
    
    return 0;
}