#include<stdio.h>

int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m); 

    long long a[n];
    for(i=0; i<n; i++)
    scanf("%lld",&a[i]);

    long long b[m];
    for(i=0; i<m; i++)
    scanf("%lld",&b[i]);

    int count=0;
    for(j=0; j<m; j++)
    {
        for(i=0; i<n; i++)
        {
            if(b[j]>=a[i])
            {
                count++;
            }
        }
        printf("%d ",count);
        count = 0;
    }
}