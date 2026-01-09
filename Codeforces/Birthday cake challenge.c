#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int max = 0;
    int a[n];
    for(int i=1; i<=n; i++)
    {

        scanf("%d",&a[i]);
        if(a[i]>max)
            max=a[i];
    }
    int count = 0;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==max)
            count++;
    }
    printf("%d",count);
}
