#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n],y[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    double distance = 1000000;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
        double s = (double)sqrt(((x[j]-x[i])*(x[j]-x[i]))+((y[j]-y[i])*(y[j]-y[i])));
        if(s<distance)
        distance=s;
        }
    }
    printf("%.14lf\n",distance);
}