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
            printf("%d\n",n/4);
        else
            printf("%d\n",(n/4)+1);
    }
}
