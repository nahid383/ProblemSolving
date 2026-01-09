#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, a, b;
        scanf("%d %d %d",&n, &a, &b);

        if((n%2==0) && (b<=(2*a)))
            printf("%d\n",b*(n/2));
        else if((n%2!=0) && (b<=(2*a)))
            printf("%d\n",(b*(n/2))+a);
            else if(b>(2*a))
                    printf("%d\n",n*a);

    }
}
