// 1+2+3+4+5...+n=?

#include<stdio.h>
int main()
{
    int i, n,sum=0;
    printf("Enter the last number: ");
    scanf("%d",&n);
    printf("1+2+3+4+...+%d ",n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("= %d\n",sum);
}
