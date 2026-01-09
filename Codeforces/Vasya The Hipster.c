#include<stdio.h>
int main()
{
    int a,b,sameshocks;
    scanf("%d %d",&a, &b);
    if(a<b)
    {
        sameshocks=(b-a)/2;
        printf("%d %d",a,sameshocks);
    }
       else if(a>b)
    {
        sameshocks=(a-b)/2;
        printf("%d %d",b,sameshocks);
    }
    return 0;
}
