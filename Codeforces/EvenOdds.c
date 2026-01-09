#include<stdio.h>
int main()
{
    long long n,k,i;
    scanf("%lld %lld",&n,&k);
    long long a[n];
    long long odds=1;
    long long even =2;
    if(n%2==0)
    {
        for( i=1; i<=n/2; i++)
        {
            a[i]=odds;
            odds=odds+2;
        }
        for( i=(n/2)+1; i<=n; i++)
        {
            a[i]=even;
            even=even+2;
        }
    }
    else
    {
        for( i=1; i<=(n/2)+1; i++)
        {
            a[i]=odds;
            odds=odds+2;
        }
        for( i=(n/2)+2; i<=n; i++)
        {
            a[i]=even;
            even=even+2;
        }
    }

  printf("%lld",a[k]);
}