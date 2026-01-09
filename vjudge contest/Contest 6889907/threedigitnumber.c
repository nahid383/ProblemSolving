#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d",&a,&b);
    for(int i=a; i<=b; i++)
    {
         int temp = i;
        int first, second, third;
        first = temp%10;
        temp = temp/10;
        second = temp%10;
        temp = temp/10;
        third = temp%10;

        if(first!=second && first!=third && second!=third)
        printf("%d\n",i);
       
    }
}