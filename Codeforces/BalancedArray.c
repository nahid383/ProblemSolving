#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if(n%4!=0)
        printf("NO\n");
        else
        {
            printf("YES\n");
            int sumeven=0;
            int sumodd=0;
            for(int i=1; i<=n; i++)
            {
                if(i%2==0)
                {
                printf("%d ",i);
                sumeven=sumeven+i;
                }

            }

            for(int i=1; i<=n-2; i++)
            {
                if(i%2!=0)
                {
                printf("%d ",i);
                sumodd=sumodd+i;
                }
            }
          
            printf("%d",sumeven-sumodd);
            printf("\n");
        }
    }
    
}