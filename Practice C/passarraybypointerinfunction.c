#include<stdio.h>
void printArray(int arr[],int size)

{
    for(int i=0; i<size; i++)
    {
        printf("%d\t",arr[i]);
    }
}
int main()
{
    int arr[]={1,2,3,4};
    printArray(arr,4);
}