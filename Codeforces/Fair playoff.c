#include<stdio.h>
int main()
{
    int t,winner1,winner2,loser1,loser2;
    scanf("%d",&t);
    while(t--)
    {
        int s1,s2,s3,s4;
        scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
        if(s1>s2)
        {
            winner1=s1;
            loser1=s2;
        }

            else
            {
                            winner1=s2;
                            loser1=s1;
            }

        if(s3>s4)
        {
            winner2=s3;
            loser2=s4;
        }
        else
        {
            winner2=s4;
            loser2=s3;
        }


        if(((winner1>loser1) && (winner1>loser2)) && ((winner2>loser1)&&(winner2>loser2)))
            printf("Yes\n");
        else
            printf("No\n");
    }
}
