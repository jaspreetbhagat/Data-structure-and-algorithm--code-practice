//finding duplicates in sorted array
//counting the number of duplicates
#include<iostream>
using namespace std;

int main()
{
    int a[]={3,6,8,8,10,15,15,15,20};
    int last_duplicate = 0;
    int count =0;
    cout<<"the repeating numbers in the array are "<<endl;
    for(int i=0;i<11;i++){
            if(a[i]==a[i+1]&& a[i]!=last_duplicate){
                last_duplicate=a[i];
                cout<<last_duplicate<<" "<<endl;
                //for counting the number of times an element is repeating
            for (int j = 1; j < 10; j++)
            {
                // j=i+1;
                while(a[j]==a[i]){
                    count++;
                    cout<<a[i]<<" is appering "<<count+1<<" times."<<endl;
                    i = j-1;
                }
            }
            }
    }
    return 0;
}