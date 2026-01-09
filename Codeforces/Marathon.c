#include<stdio.h>
int main()
{
    int t, a, b, c, d,count=0;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d %d",&a, &b, &c, &d);
        if(a<b)
            count++;
        if(a<c)
            count++;
            if(a<d)
            count++;

              printf("%d\n",count);
              count=0;
    }

}
