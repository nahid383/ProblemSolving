#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long i,j;
        long long temp, n,k;
        scanf("%lld %lld",&n,&k);
        long long a[n];
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        int count=0;
        int max_count=0;
        for(i=0; i<n-1; i++)
        {
            if(a[i+1]-a[i]<=k)
            {
                count++;
                if(count>max_count)
                {
                    max_count=count;
                }
            }
            else
            count=0;
        }
        printf("%d\n",n-max_count-1);
    }
    return 0;
}