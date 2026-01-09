//1^2+2^2+3^2+4^2+...+n^2;

#include<stdio.h>
int main()
{
    int i, num, sum=0;
    printf("Enter the last number: ");
    scanf("%d",&num);

    printf("1^2+2^2+3^2+4^2+...+%d^2 ",num);

    for(i=1; i<=num; i++)
    {
        sum=sum+i*i;

    }
    printf(" = %d",sum);
}
