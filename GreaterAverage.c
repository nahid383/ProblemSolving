#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        float A,B,C;
        scanf("%f %f %f",&A,&B,&C);
        if((A+B)/2 > C)
        printf("Yes\n");
        else
        printf("No\n");
    }
}