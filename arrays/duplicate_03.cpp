//finding duplicates in an unsoretd array

#include<iostream>
using namespace std;

int main()
{
    int count;
    int a[]={8,3,6,4,6,5,6,8,2,7};
    int n = 10;
    for(int i=0;i<n-1;i++){
        count =1;
        if(a[i]!=-1){
        for(int j= i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                a[j]=-1;
            }
        }
        }
        if(count>1){

            cout<<a[i]<<" is present in the array for "<<count<<" times"<<endl;
        }
        // cout<<a[i]<<" ";
    
    }
    return 0;
}