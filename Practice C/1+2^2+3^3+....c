#include<stdio.h>
int main()
{
    int n, i, sum;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    sum=0;
    for(i=1; i<=n; i++)
    {
        sum=sum+pow(i,i);
    }
    printf("Summation is : %d",sum);

    return 0;

}
