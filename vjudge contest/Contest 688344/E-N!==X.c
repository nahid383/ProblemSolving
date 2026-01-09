#include<stdio.h>
int main()
{
    long long X;
    long long N=1;
    scanf("%lld",&X);
    for(long long i=2; i<X; i++)
    {
            for(long long j=i; j>=1; j--)
            {
                N=N*j;
            }
            if(N==X)
            {
                printf("%lld\n",i);
                break;
            }
            else
            {
                N=1;
                      continue;
            }
          
    }
}