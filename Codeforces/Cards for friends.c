#include<stdio.h>
int main()
{
    int t;

    scanf("%d",&t);
    while(t--)
    {
        int count=1;
        int w,h,n;
        scanf("%d %d %d",&w,&h,&n);
        while(w%2!=1)
        {
            w=w/2;
            count=count*2;
        }
        while(h%2!=1)
        {
            h=h/2;
            count=count*2;
        }
        if(count>=n)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
