#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);

        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;

                }
            }
        }
        int sum=0;
        for(int i=n-1; i>=n-1-k; i++)
        {
            sum=a[i];
        }
        printf("%d\n",sum);
    }
}