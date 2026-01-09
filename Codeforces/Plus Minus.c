#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float a,positive=0, negative =0, zero =0;
    for(int i=1; i<=n; i++)
    {
        scanf("%f",&a);
        if(a>0)
        positive++;
        else if(a<0)
            negative++;

                else
                zero++;

    }
    printf("%.6f \n%.6f \n%.6f",positive/n,negative/n,zero/n);
}
