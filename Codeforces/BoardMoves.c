#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        
        long long moves=((n*n-1)*n)/3;

        printf("%lld\n",moves);

    }
}