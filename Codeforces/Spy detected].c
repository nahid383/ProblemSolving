#include<stdio.h>
int main()

{
    int t, n, i, j=0;
    scanf("%d",&t);
while(t--)
    {
        scanf("%d",&n);
        int a[n];
        scanf("%d",&a[n]);

         if((a[n]!=a[n+1])&&(a[n]!=a[n+2]))
        printf("%d",j);
    }
    return 0;
}
