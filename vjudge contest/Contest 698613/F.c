#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);

        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        int minimum=a[0];
        int minimum_index;
        for(int i=0; i<n; i++)
        {
            if(a[i]<=minimum)
            {
                minimum=a[i];
                minimum_index=i;
            }
        }
        int maximum=0;
        int  maximum_index;
        for(int i=0; i<n; i++)
        {
            if(a[i]>maximum)
            {
                maximum=a[i];
                maximum_index=i;
            }
        }
        printf("%d\n",maximum_index-minimum_index);

    }
    
}