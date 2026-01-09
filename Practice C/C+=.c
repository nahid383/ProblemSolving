#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while (T--)
    {
        int a, b, n;
        int count = 0;
        scanf("%d %d %d",&a,&b,&n);
        while(a<=n && b<=n)
        {
            if(a<=b)
            {
                a= b+a;
                count++;
            }
            else if(b<=a)
            {
                b=b+a;
                count++;
            }
        }
        printf("%d\n",count);
    }

}
