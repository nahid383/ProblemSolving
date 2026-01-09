#include<stdio.h>
int main()
{
    int k,r;
    scanf("%d %d",&k,&r);
    int i=1;
    
    while(1)
    {
       int t0tal = i*k;
       if(t0tal%10==0 ||t0tal%10==r)
       {
        printf("%d",i);
        break;
       }
       i++;
    }
}