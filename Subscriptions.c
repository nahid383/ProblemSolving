#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,X;
        scanf("%d %d",&N,&X);
        if(N%6==0)
        {
            printf("%d\n",(N/6)*X);

        }
        else
        {
            printf("%d\n",((N/6)+1)*X);
        }
    }
}