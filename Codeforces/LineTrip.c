#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, x;
        scanf("%d %d",&n,&x);
        int a[n+2];
        a[0]=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }
        a[n+1]=x;
        int max_gap=0;
        int gap=0;
        for(int i=1; i<=n+1; i++)
        {
            gap=a[i]-a[i-1];
            if(gap>max_gap)
            max_gap=gap;
        }

        int last_gap = 2*(a[n+1]-a[n]);
        if(max_gap>last_gap)
        printf("%d\n",max_gap);
        else
        printf("%d\n",last_gap);
    }
}