#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,k;
        scanf("%d %d",&x,&k);
        int count = 0;
        if(x<k)
        {
            printf("1\n%d",x);
            
        }
        else
        {
           if(x%k==0)
           {
            printf("2\n");
            printf("%d %d",x-k-1,k+1);
           }
           else
           {
            printf("1\n%d",x);
           }
        }
        printf("\n");
    }
    return 0;
}