#include<iostream>
using namespace std;
struct array{
    int a[20];
    int length;
    int size;
};
void display(struct array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.a[i]<<" ";
    }
}
struct array *insert(struct array *arr1,struct array *arr2){
    int i,j,k;
    i=j=k=0;
    struct array *arr3 = (struct array *)malloc(sizeof(struct array));
    while(i<arr1->length && j<arr2->length){
        if(arr1->a[i]<arr2->a[j]){
            arr3->a[k++]=arr1->a[i++];
        }
        else if(arr2->a[j]<arr1->a[i]){
            j++;

        }
        else{
            i++;
            j++;
        }
    }
    for(;i<arr1->length;i++){
        arr3->a[k++]=arr1->a[i++];
    }
    arr3->length=k;
    arr3->size= 10;
    return arr3;
}
int main()
{
    struct array arr1={{2,6,10,15,25},10,5};
    struct array arr2={{3,6,7,15,20},10,5};
    struct array *arr3;
    arr3 = insert(&arr1,&arr2);
    display(*arr3);
    return 0;
}