#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    if(sum>5)
    {
        printf("%d\n",sum-3);
    }
    else
    {
        printf("%d\n",sum+3);
    }

    return 0;
}