#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
     
        int n;
        scanf("%d",&n);
        char a[n+1];
        scanf("%s",a);
        
        int underscore=0, dash=0;
        
        for(int i=0; i<n; i++)
        {
            if(a[i]=='-')
            dash++;
            else
            underscore++;
        }
        if(dash<2 || underscore<1)
        printf("0\n");
        else
        {
     long long  count = (long long)dash * (dash - 1) / 2 * underscore;
            printf("%lld\n", count);
        }
    
    }
}