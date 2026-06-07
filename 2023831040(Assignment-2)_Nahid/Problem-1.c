#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter all the elements of array: ");
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]>max)
        max=a[i];

    }
    int min = a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]<min)
        min=a[i];

    }

    printf("Max = %d, Min = %d",max,min);
}