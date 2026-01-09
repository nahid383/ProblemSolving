#include<stdio.h>
int main()
{
    int n;
     int n,p,q,i,j,f=0;
    scanf("%d",&n);
    scanf("%d",&p);
    int a[p];
    for(i=0; i<p; i++)
         scanf("%d",&a[i]);

     scanf("%d",&q);
    int b[q];
    for(i=0; i<q; i++)
    scanf("%d",&b[i]);

    for(i=1; i<=n; i++)
    {
        for(j=0; j<p; j++)
        {
            if(i==a[j])
                f=1;
        }
    }


}
