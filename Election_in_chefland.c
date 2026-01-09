#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        int a[n];
        int count=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>=x)
            count++;
        }
        printf("%d\n",count);
    }
}