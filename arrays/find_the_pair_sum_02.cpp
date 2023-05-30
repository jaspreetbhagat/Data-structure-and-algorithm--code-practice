//find the pair of sum k in a sorted array
#include<iostream>
using namespace std;

int main()
{
    int a[]={1,3,4,5,6,8,9,10,12,14};
    int k=10;
    int n=10;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(a[i]+a[j]==k){
                cout<<a[i]<<"+"<<a[j]<<"="<<k<<endl;
            }
        }
    }

    return 0;
}
