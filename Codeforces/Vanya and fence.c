#include<stdio.h>
int main()
{
    int i, n,h,height,width=0;
    scanf("%d %d",&n,&h);
    for(i=0; i<n; i++)
    {
        scanf("%d",&height);
        if(h>=height)
            width=width+1;
            else
                width=width+2;
    }
    printf("%d",width);
}
