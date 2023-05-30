// problem: we are given n tower and in one of the tower m no. of disks are placed.
// goal:- we have to transfer all the disk from tower A to tower C.
//conditions:-
//1.we can only move one disk at a time.
//2.we have to transfer in a way so no larger disk is placed on the smaller disk while transferring.,
//Toh(1,A,B,C){
    // move disk from A to C using B
// }
//Toh(2,A,B,C){
    // Toh(1,A,B,C)
    // Move disk from A to C using B
    //Toh(1,B,A,C)
// }
//toh(n,A,B,C){
        //Toh(n-1,A,B,C)
        //Move disk from A to C using B
        //Toh(n-1,B,A,C)
// }
#include<iostream>
using namespace std;
void Toh(int n,int A,int B,int C){//A->from tower, C->destination    tower,B->auxillary tower.
    if(n>0){
        Toh(n-1,A,C,B);
        cout<<"("<<A<<","<<C<<")"<<endl;
        // cout<<"from "<<A<<" to "<<C<<" using " <<B<<endl;
        Toh(n-1,B,A,C);
    }
}
int main()
{
    
    // Toh(6,1,2,3);
    cout<<2040%10;
    return 0;
}