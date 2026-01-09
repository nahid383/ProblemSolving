#include<stdio.h>
int main()
{
   long long int n,i, even=0, odd=0;
    scanf("%lld",&n);
   for(i=1; i<=n; i++)
   {
       if(i%2==0)
        even=even+i;
       else
        odd=odd-i;
   }
   printf("%lld",even+odd);
    return 0;
}
