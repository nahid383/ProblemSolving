#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,n;
        scanf("%d %d %d %d",&a,&b,&c,&n);
        int sum = a+b+c+n;
        if((sum%3==0)&&((sum/3>=a) && (sum/3>=b) && (sum/3>=c)))
            printf("Yes\n");

        else

            printf("No\n");
    }
}
