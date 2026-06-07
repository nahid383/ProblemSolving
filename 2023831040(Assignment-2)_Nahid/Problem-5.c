#include<stdio.h>
int main()
{
    int n; 
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter all the elemnet of the array: ");
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    int temp = a[0];
    for(int i =0; i<n; i++)
    {
        
        a[i] = a[i+1];
       
    }
    a[n-1]=temp;
    printf("One position to the left: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

}