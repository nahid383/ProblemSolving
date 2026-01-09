//copying all elements of any array to another one array.

#include<stdio.h>
int main()
{
    int array1[40],array2[40], n, i;
    printf("Enter how many numbers you want to see: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }
        printf("Array 1: ");
        for(i=0; i<n; i++)
        {
            printf("%d  ",array1[i]);
        }
        for(i=0; i<n; i++ )
        {
            array2[i]=array1[i];
        }
    printf("\nArray 2: ");

    for(i=0; i<n; i++)
    {
        printf("%d  ",array2[i]);
    }
    printf("\n");
}

