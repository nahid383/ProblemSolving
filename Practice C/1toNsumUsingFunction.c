#include<stdio.h>
int sum(int n)
{
   int sum1=0;
    for(int i=1; i<=n; i++)
    {
        sum1=sum1+i;
    }
    return sum1;
}
int main()
{
    int n,sum1;
    scanf("%d",&n);
    int summation = sum(n);
    printf("%d",summation);
}