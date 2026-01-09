#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int socks[101]={0};
    int color,pair=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&color);
        socks[color]++;
    }
    for(int i=0; i<=100; i++)
    {
        pair=pair+(socks[i]/2);
    }

    printf("%d\n",pair);

}