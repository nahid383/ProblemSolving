#include<stdio.h>
int main()
{
    int t,min=0,minimum_candy=0;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(min>a)
                min=a;
        }
        for(int i=0; i<n; i++)
        {
            minimum_candy=minimum_candy+(a[i]-min);
        }
        printf("%d\n",minimum_candy);
    }
}
