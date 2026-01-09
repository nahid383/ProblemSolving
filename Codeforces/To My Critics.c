#include<stdio.h>
 int main()
 {
     int t, a, b, c;
     scanf("%d",&t);
         for(int i=1; i<=t; i++)
         {
             scanf("%d %d %d",&a, &b, &c);
             if((a+b)>=10)
                printf("YES\n");
             else if((a+c)>=10)
                printf("Yes\n");
             else if((b+c)>=10)
                printf("yEs\n");
             else
                printf("NO\n");
         }
 }
