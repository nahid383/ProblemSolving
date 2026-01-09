#include<stdio.h>
int main()
{
   long long int t, x,y,k,n,i,j;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld %lld",&x,&y,&n);
      if (n % x >= y) {
            k = n - (n % x) + y;
        } else {
            k = n - (n % x) - (x - y);
        }
        printf("%lld\n",k);
    }
}
