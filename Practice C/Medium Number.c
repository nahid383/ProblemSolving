#include<stdio.h>
int main()
{
    int t, a, b, c;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d",&a, &b, &c);
        if((b>a&&a>c) || (b<a&&a<c))
            printf("%d\n",a);
        else if((b<a&&b>c) || (b>a&&b<c))
            printf("%d\n",b);
        else if((c>b&&c<a) || (c<b&&c>a))
            printf("%d\n",c);
    }
    return 0;
}
