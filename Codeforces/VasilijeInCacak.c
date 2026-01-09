#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n, k, x;
        scanf("%lld %lld %lld",&n,&k,&x);


        long long minimum_sum = k*(k+1)/2;
        long long maximum_sum = k*(2*n-k+1)/2;
        
        if(x>=minimum_sum && x<=maximum_sum)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}