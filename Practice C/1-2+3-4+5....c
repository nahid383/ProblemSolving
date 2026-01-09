#include<stdio.h>
int main()
{
    int n, i, sum;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    int addition=0, substraction=0;
    for(i=1; i<=n; i=i+2)
    {
        addition=addition+i;
    }
    for(i=2; i<=n; i=i+2)
    {
        substraction = substraction-i;
    }
    sum=addition+substraction;

    printf("Summation is = %d",sum);
}
