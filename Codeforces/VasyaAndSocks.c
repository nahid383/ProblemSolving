#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int days=0;

    while(n>0)
    {
        days++;
        n--;
        if(days%m==0)
        n++;
    }
    printf("%d\n",days);
}