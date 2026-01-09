#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int n;
       scanf("%d",&n);
       int rem = n%10;
       int div = n/10;
       printf("%d\n",rem+div);
    }
}