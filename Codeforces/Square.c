#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int ans =1;
       int a1,a2,a3,a4,b1,b2,b3,b4;
       scanf("%d %d",&a1,&b1);
       scanf("%d %d",&a2,&b2);
       scanf("%d %d",&a3,&b3);
       scanf("%d %d",&a4,&b4);
       
            if(a1==a3)
            ans = ans*(abs(b1-b3));
            else
            ans = ans*(abs(a1-a3));
            if(a2==a4)
            ans = ans*(abs(b2-b4));
            else
            ans = ans*(abs(a2-a4));

            printf("%d\n",ans);
    }
}

