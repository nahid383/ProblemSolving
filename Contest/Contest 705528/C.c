#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long d;
    scanf("%lld",&d);
    long long minDiff = 999999999999;
    long long x=0;
    while((x*x)<=(d+minDiff))
    {
        long long y = sqrt(d-(x*x));
        long long dif_1= llabs(((x*x)+(y*y))-d);
        long long dif_2= llabs((x*x)+(y+1)*(y+1)-d);

        if(dif_1<minDiff)
        {
            minDiff=dif_1;

        }
        if(dif_2<minDiff)
        {
            minDiff=dif_2;
        }

        x++;

    }
    printf("%lld\n",minDiff);

    return 0;

}