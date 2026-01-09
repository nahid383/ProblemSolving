#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b,c,d;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        long long x=b;
        long long y=c;
        long long z=c;
        printf("%lld %lld %lld\n",x,y,z);
    }
}