#include<stdio.h>
int main()
{
    int t, n, count=0;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d",&n);
        if(n%10000==0 || n%1000==0 || n%100==0 || n%10==0)
        {
            printf("%d ",n);
            count++;
            n=0;
        }

        if(n%10!=0)
        {
            printf("%d ",n%10);
            count++;
             n=n-(n%10);
        }

        if(n%100!=0)
        {
            printf("%d ",n%100);
            count++;
               n=n-(n%100);
        }

        if(n%1000!=0)
        {
            printf("%d ",n%1000);
            count++;
            n=n-(n%1000);
        }

        if(n%10000!=0)
        {
            printf("%d ",n%10000);
            count++;
        }
        printf("\n%d\n",count);
        count=0;
    }
}

