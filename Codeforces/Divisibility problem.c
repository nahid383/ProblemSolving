#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a, b;
        scanf("%lld %lld",&a, &b);
        long long reminder = a%b;
        if(reminder==0)
            printf("%lld",reminder);
        else
            printf("%lld\n",b-reminder);
    }
    return 0;
}
