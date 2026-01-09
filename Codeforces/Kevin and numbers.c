#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long array1 = 0;
        long long array2 = 0;
        long long n,m;
        scanf("%lld %lld",&n,&m);
        long long a, b;
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&a);
            array1=array1+a;
        }
        for(int i=0; i<m; i++)
        {
            scanf("%lld",&b);
            array2=array2+b;
        }
        if(array1==array2)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
