#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a;
        scanf("%d",&a);
        int sum = a*4;
        if(sum<=1000)
        printf("Yes\n");
        else
        printf("No\n");
    }
}