#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        int ac= c-a;
        int bd= d-b;

        if(b>d)
        printf("-1\n");
        else if(ac>bd)
        printf("-1\n");
        else
        {
            printf("%d\n",bd+bd-ac);
        }
    }
    return 0;
}