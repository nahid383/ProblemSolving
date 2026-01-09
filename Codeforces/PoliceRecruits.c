#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int one=0;
    int none=0;
    int untreated=0;
    int max=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==-1)
        {
            untreated++;
            if(untreated>max)
            max=untreated;
        }
        if(a[i]>=1)
        {
            untreated=untreated-a[i];
        }
    }
    printf("%d\n",max);
}