#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("-1\n");
        }
        else
        {
            for(int i=1; i<=n; i++)
            {
                if(i%2==0)
                {
                    printf("%d ",i);
                }
            }
            printf("1 ");
            for(int i=2; i<=n; i++)
            {
                if(i%2!=0)
                {
                    printf("%d ",i);
                }
            }
            printf("\n");
        }
    }
}