#include<stdio.h>
int main()
{
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int total_price=0;
 
    for(int i=1; i<=w; i++)
    {
        total_price=total_price+(i*k);
       
    }
    if(total_price<=n)
    printf("0\n");
    else
    printf("%d\n",total_price-n);
}