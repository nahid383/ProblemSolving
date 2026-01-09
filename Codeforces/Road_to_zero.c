#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long x,y;
        scanf("%lld %lld",&x,&y);
        long long a,b;
        scanf("%lld %lld",&a,&b);
        if(x>y)
        {
            x=x+y;
            y=x-y;
            x=x-y;
        }
        long long cost = (x+y)*a;
        if(b<2*a)
        {
            long long cost2= x*b + (y-x)*a;
            if(cost2<cost)
            cost=cost2;
        }
        printf("%lld\n",cost);
    }
}