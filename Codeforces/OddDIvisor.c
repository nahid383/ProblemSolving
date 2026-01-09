#include<stdio.h>
int main()
{
        long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long flag=0;
        if(n%2==1)
        flag=1;
        else{
            for(long long i=3; i<=n; i=i+2)
            {
                if(n%i==0)
                {
                    flag=1;
                }
            }
        }
        if(flag==1)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}