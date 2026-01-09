#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n%4==0)
        printf("Yes\n");
        else
        printf("No\n");
    }
}