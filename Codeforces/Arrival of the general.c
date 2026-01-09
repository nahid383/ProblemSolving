#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    int maxindex=0, minindex=0;

    for(int i=1; i<n; i++)
    {
        if(a[i] > a[maxindex])
            maxindex=i;
        if(a[i] <= a[minindex])
            minindex=i;
    }
    int time = maxindex+(n-1-minindex);
    if(maxindex>minindex)
    {
        time--;
    }
    printf("%d",time);
    return 0;
}
