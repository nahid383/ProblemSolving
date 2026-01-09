#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d ",n);
            for(int i=1; i<n; i++)
            {
                printf("%d ",i);
            }
            printf("\n");
        }
    }
    
    return 0;
}