#include<stdio.h>
int main()
{
    int i, N,fact=1;
    int sumoffactorials=0;
    printf("Enter any number: ");
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        for(int j=1;j<=i ;j++)
    {
        fact=fact*j;
    }
    sumoffactorials=sumoffactorials+fact;
    fact=1;
    }

    printf("Sum of Factorials is: %d",sumoffactorials);
    return 0;
}
