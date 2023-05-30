#include<iostream>
using namespace std;

int main()
{
    //declaring 2Darray
    int rows,col;
    int a[20][20];
    cout<<"enter the no. of rows :"<<endl;
    cin>>rows;
    cout<<"enter the no. of coloumns"<<endl;
    cin>>col;
    cout<<"enter the elements in the array "<<rows<<" * "<<col<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}