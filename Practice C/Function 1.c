#include<stdio.h>
int add(int num1, int num2)
{
    int sum = num1+num2;
    return sum;
}
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=add(a,b);
    printf("%d",c);
}
