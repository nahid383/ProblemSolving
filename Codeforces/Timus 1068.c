#include<stdio.h>
int main()
{
    int n, sum;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    if(n>0)
        sum=(n*(n+1))/2;
    else
        sum=1+(n*(1-n))/2;
    printf("Sum : %d",sum);
}
