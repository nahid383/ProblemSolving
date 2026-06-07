#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    int m;
    scanf("%d",&m);
    int q[m];
    for(int i=0; i<m; i++)
    {
        scanf("%d",&q[i]);

    }

    for(int i=0; i<m; i++)
    {
        int sum = 0;
        for(int j=0; j<n; j++)
        {
            sum = sum + a[j];
            if(sum>=q[i])
            {
                printf("%d\n",j+1);
                break;
                
            }
    
        }
    }
    return 0;

}