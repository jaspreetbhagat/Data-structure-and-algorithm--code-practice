#include<iostream>
using namespace std;

int main()
{
    //the A pointer is in stack pointing to arrays that are in heap
    int rows,col;
    cout<<"enter the rows of arrays:";
    cin>>rows;
    cout<<"enter the col of arrays:";
    cin>>col;
    int *A[rows];
    A[0] = new int[col];
    A[1] = new int[col];
    A[2] = new int[col];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>A[i][j];
        }
        cout<<endl;
    }
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}