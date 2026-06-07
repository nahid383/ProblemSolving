#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long a;
    long long sum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&a);
        sum=sum+a;
    }
    printf("%lld",sum);
}