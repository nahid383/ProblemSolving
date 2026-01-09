#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int x;
        scanf("%d",&x);
        if(x<=1000)
        printf("100\n");
        else
        printf("%d\n",x/10);
    }
}