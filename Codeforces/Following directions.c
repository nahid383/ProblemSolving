#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
                int x=0, y=0, count =0;
        char s[n];
         scanf("%s",&s);
        for(int i=0; i<n; i++)
        {
            if(s[i]=='L')
                x--;
           else if(s[i]=='R')
                x++;
            else if(s[i]=='U')
                y++;
           else if(s[i]=='D')
               y--;

                if(x==1 && y==1)
                count =1;

        }
        if(count==1)
            printf("Yes\n");
        else
            printf("No\n");

    }
}
