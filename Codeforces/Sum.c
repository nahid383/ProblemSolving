#include<stdio.h>
int main()
{
    int t, a, b, c;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a+b)==c)
        {
            printf("yEs\n");
        }
        else if((a+c)==b)
        {
            printf("yeS\n");
        }
        else if((b+c)==a)
        {
            printf("YeS\n");
        }
        else
        {
            printf("nO\n");
        }
    }
    return 0;
}
