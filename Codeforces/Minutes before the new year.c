#include<stdio.h>
int main()
{
    int t, h, m,minutes_remaining;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d",&h,&m);
        minutes_remaining = (23-h)*60 + (60-m);
        printf("%d\n",minutes_remaining);
    }
}
