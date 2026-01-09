#include<stdio.h>

int factorial(int x)
{
    int sum=1;
    for(int i=2; i<=x; i++)
    {
        sum=sum*i;
    }
    return sum;
}



int main()
{
    int n;
    scanf("%d",&n);

    int fact= factorial(n);

    printf("%d",fact);
}