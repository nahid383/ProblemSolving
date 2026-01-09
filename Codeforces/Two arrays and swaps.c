#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, k;
        scanf("%d %d",&n,&k);
        int a[n], b[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0; i<n; i++)
        {
            scanf("%d",&b[i]);
        }
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-i-1; j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-i-1; j++)
            {
                if(b[j]>b[j+1])
                {
                    int temp = b[j];
                    b[j] = b[j+1];
                    b[j+1] = temp;
                }
            }
        }

        for(int i=0; i<k; i++)
        {
            if(a[i]<b[i])
            {
                int temp = a[i];
                a[i] = b[i];
                b[i] = a[i];
            }
        }
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum = sum + a[i];
        }

        printf("%d\n",sum);

    }
}
