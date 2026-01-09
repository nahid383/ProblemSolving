#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int A,B,C,X;
        scanf("%d %d %d %d",&A,&B,&C,&X);
        if(A+B>=X || A+C>=X || B+C>=X)
        {
            printf("Yes\n");

        }

        else
        printf("NO\n");
    }
}