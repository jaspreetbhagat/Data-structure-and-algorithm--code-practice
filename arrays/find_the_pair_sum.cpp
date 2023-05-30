//find a pair with sum k;
#include<iostream>
using namespace std;

int main()
{
    int a[]={6,3,8,10,16,7,5,2,9,14};
    int num;
    cout<<"enter the num:"<<endl;
    cin>>num;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]+a[j]==num){
                cout<<a[i]<<"+"<<a[j]<<"="<<num<<endl;
            }
        }
    }
    return 0;


    //with the help of hashing
    // int a[]={6,3,8,10,16,7,5,2,9,14};
    // int b[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    // int num;
    // cout<<"enter the num:"<<endl;
    // cin>>num;
    // for(int i=0;i<9;i++){
    //         if(b[num-a[i]]!=0){
    //             cout<<a[i]<<"+"<<num-a[i]<<"="<<num<<endl;
    //         }
    //         b[a[i]]++;
    //     }


}

//complexity:-o(n^2);