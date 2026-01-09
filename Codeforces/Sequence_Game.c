#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long b[n];
        for(long long i=0; i<n; i++)
        {
            scanf("%lld",&b[i]);
        }
        long long count=0;
        for(long long i=1; i<n; i++)
        {
            if(b[i]<b[i-1])
            count++;
        }
        printf("%lld\n",n+count);

        for(long long i=0; i<n; i++)
        {
            printf("%lld ",b[i]);
            if(b[i]>b[i+1])
            {
                printf("%lld ",b[i+1]);
            }
         
            
        }
       printf("\n");
    }
}