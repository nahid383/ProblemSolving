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
    int odd=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2!=0)
        {
            odd++;
        }

    }

    if(odd>1)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            printf("%d",i+1);
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            
            if(a[i]%2!=0)
            printf("%d",i+1);
        }
    }

    return 0;
}