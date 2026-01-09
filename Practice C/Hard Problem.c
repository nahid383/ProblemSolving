#include<stdio.h>

long long maximummonkeycanseat(long long  a, long long b, long long c, long long m)
{
     long long row1=(a<m) ? a:m;
     long long row2=(b<m) ? b:m;

    long long remainingrow1 = m - row1;
    long long remainingrow2 = m - row2;

    long long additionalformc= (remainingrow1+remainingrow2<c) ? (remainingrow1+remainingrow2) : c;

    return row1+row2+additionalformc;
 }
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
               long long m, a,b,c;
    scanf("%lld %lld %lld %lld",&m, &a, &b, &c);
    printf("%lld\n",maximummonkeycanseat(m,a,b,c));
    }
    return 0;
}
