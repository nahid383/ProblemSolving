#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
            int n;
            char s[51];
            int ballons=0;
            int solved[26]={0};
            scanf("%d",&n);
            scanf("%s",s);
            for(int i=0; i<n; i++)
            {
                int problem =s[i] - 'A';
                if(solved[problem]==0)
                {
                    ballons=ballons+2;
                    solved[problem]=1;
                }
                else
                    ballons=ballons+1;

            }
            printf("%d\n",ballons);

    }
}
