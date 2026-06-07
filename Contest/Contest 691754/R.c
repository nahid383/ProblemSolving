#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i=1;
    while(t--)
    {
        float a,b,c,k;
        scanf("%f %f %f %f",&a,&b,&c,&k);
        float ad= a*sqrt(k/(k+1));
        printf("Case %d: %f\n",i,ad);
        i++;
    }
    
}