#include<stdio.h>
int main()
{
    int a, b,c,d, temp,rem;
    scanf("%d %d",&a,&b);
    c=a;
    d=b;
    while(d!=0)
    {
        rem=c%d;
        c=d;
        d=rem;
    }
    printf("GCD is  %d\n",c);
    printf("LCM is %d",(a*b)/c);
}
