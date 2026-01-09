#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while ((t--))
    {
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int b[m];
        for(int i=0; i<m; i++)
        {
            scanf("%d",&b[i]);
        }
        int count=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i]+b[j]<=k)
                {
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
    
}