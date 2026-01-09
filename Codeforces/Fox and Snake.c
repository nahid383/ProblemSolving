#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d",&n, &m);
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i%4==0)
            {
                if(j==0)
                    printf("#");
                    else
                        printf(".");
            }
            else if(i%4==2)
            {
                if(j==m-1)
                {
                    printf("#");
                }
                else
                {
                    printf(".");
                }
            }
            else
                printf("#");
        }
        printf("\n");
    }
    return 0;
}
