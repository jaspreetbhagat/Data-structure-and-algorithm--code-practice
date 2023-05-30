//finding duplicate using hash table in the unsorted array
#include<iostream>
using namespace std;

int main()
{
    int a[]={8,3,6,4,6,5,6,8,2,7};
    int max;
    max = 9;
    int b[] ={0,0,0,0,0,0,0,0,0};
    for(int i=0;i<max;i++){
        b[a[i]]++;
        if(b[i]>1){
            cout<<i<<" "<<b[i]<<endl;
        }
    }
    
    return 0;
}