#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        
        for(int i=n; i<=m; i++)
        {
            int count = 0;
            for(int j=1; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    count++;
                }
                if(count>1)
                {
                    break;
                }

            }
            if(count==1)
            {
                printf("%d\n",i);
            }
        }
        printf("\n");
    }
}