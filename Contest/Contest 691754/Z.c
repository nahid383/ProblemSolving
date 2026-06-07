#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n], b[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    for(int i=0; i<n; i++)
    {
        scanf("%d",&b[i]);

    }
    int count =0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]+a[j]>b[i]+b[j])
            count++;
        }
    }
    printf("%d\n",count);



}