#include<stdio.h>
int main()
{
    int t,ans;
    scanf("%d",&t);

    long long int n;
    for(int i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        if(n%2==0)
        {
           ans=(n/2)-1;
        }
        else
        {
            ans=n/2;
        }
        printf("%d\n",ans);
    }
    return 0;
}
