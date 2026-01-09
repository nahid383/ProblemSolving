#include<stdio.h>
int main()
{
    long long int n,s;
    scanf("%lld",&n);
    if(n%2==0)
    {
        s=n/2;
    }
    else
    {

        s=-((n/2)+1);
    }
     printf("%lld",s);

    return 0;
}
