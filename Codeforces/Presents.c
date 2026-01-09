#include<stdio.h>
int main()
{
    int n, i, temp;
    scanf("%d",&n);
    int a[n];
 for(i=1; i<=n; i++)
    {
        scanf("%d",&temp);
        a[temp]=i;
    }
     for(i=1; i<=n; i++)
     {
         printf("%d ",a[i]);
     }
     return 0;
}
