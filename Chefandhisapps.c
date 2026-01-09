#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int s,x,y,z;
        scanf("%d %d %d %d",&s,&x, &y, &z);
        if(s-x-y>=z)
        printf("0\n");
        else if(s-x>=z || s-y>=z)
        printf("1\n");
        else
        printf("2\n");
    }
}