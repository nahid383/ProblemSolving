
#include<stdio.h>
int main()
{
    int  t;
    int n;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
        {
            scanf("%d",&n);
            int sum = n/10 + n%10;
            printf("%d\n",sum);
        }
}
