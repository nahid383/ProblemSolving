#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(x==y)
        printf("0\n");
        else if(y%x==0)
        printf("%d\n",(y/x)-1);
        else
        printf("%d\n",y/x);


    }

    return 0;
}