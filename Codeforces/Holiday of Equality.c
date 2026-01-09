#include<stdio.h>
int main()
{
    int n,i,max=0,s=0,burlsneed;
    scanf("%d",&n);
      int a[n];
    for(i=0; i<n; i++)
    {

        scanf("%d",&a[i]);
        if(a[i]>max)
        max=a[i];
    }
    for(i=0; i<n; i++)
    {
        burlsneed=max-a[i];
        s=s+burlsneed;
    }
    printf("%d",s);
}
