#include<stdio.h>
int main()
{

    int n, i, numbers,sum=0,sum2=0;
    scanf("%d",&n);
    for(i=1; i<=n-1; i++)
        {
    scanf("%d",&numbers);
    sum = sum+numbers;
    }
    for(int j=1; j<=n; j++)
    {
        sum2=sum2+j;
    }
    int missingnumber=sum2-sum;
    printf("%d",missingnumber);
}
