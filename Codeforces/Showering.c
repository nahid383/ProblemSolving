#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,s,m;
        scanf("%d %d %d",&n,&s,&m);
        int l[n],r[n];
        
        for(int i=0; i<n; i++)
        {
            scanf("%d %d",&l[i],&r[i]);
        }

        int max = l[0];

        for(int i=0; i<n-1; i++)
        {
           
            int free_time =l[i+1]-r[i];
           if(free_time>max)
           max=free_time;

        }

        int last_gap = m-r[n-1];
        if(last_gap>max)
        max=last_gap;

        if(max>=s)
        printf("Yes\n");
        else
        printf("No\n");
    }

    return 0;
}