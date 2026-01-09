#include<stdio.h>

int minimum(int a[],int n)
{
    int min = a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]<min)
        min= a[i];
    }
    return min;
}

void solve()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int max=0;
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        max=a[i];
    }
    int min = minimum(a,n);

    printf("%d\n",max-min);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }
}