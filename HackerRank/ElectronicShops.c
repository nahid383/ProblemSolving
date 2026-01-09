#include<stdio.h>
int main()
{
    int b,n,m;
    scanf("%d %d %d",&b,&n,&m);
    int x[n];
    for(int i=0; i<n; i++)
    scanf("%d",&x[i]);
    int y[m];
    for(int i=0; i<m; i++)
    scanf("%d",&y[i]);
    int max=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int sum=x[i]+y[j];
            if(sum>max && sum<=b)
            max=sum;
        }
    }
    if(max==0)
    printf("-1\n");
    else
    printf("%d\n",max);
}