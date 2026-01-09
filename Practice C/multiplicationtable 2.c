#include<stdio.h>
int main()
{
    int num, i;
    printf("Enter any integer number: ");
    scanf("%d",&num);
    for(i=1; i<=100; i++)
    {
        printf("%dX%d=%d\n",i,num,i*num);
    }
}

