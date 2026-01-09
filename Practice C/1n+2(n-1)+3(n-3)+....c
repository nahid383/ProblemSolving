#include<stdio.h>
int main()
{
    int i, j, n, sum;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    sum=0;
    for(i=1; i<=n; i++)

        for(j=n; j>=1; j--)

                sum=sum+(i*j);
    printf("%d",sum);
}
