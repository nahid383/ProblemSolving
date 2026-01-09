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
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]<0)
            a[i]=(-(a[i]));
            sum = sum +a[i];
        }
        printf("%d\n",sum);
    }
}