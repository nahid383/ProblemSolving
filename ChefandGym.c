#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int X,Y,Z;
        scanf("%d %d %d",&X,&Y,&Z);
        if(X+Y<=Z)
        printf("2\n");
        else if(X<=Z)
        printf("1\n");
        else
        printf("0\n");
    }
}