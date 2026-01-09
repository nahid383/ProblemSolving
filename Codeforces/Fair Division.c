#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,two=0,one=0;
        scanf("%d",&n);

        for(int i=1; i<=n; i++)
        {
             int a;
            scanf("%d",&a);
            if(a==2)
                two++;
            else
                one++;
        }
        int total_weight= two*2+one;
        if(total_weight%2==0)
           {
               int half_weight=total_weight/2;
               if(half_weight%2==0 || one>0 && half_weight%2==1)
                printf("Yes\n");
               else
                printf("No\n");
           }
           else
            printf("no\n");

    }
}
