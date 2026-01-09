#include<stdio.h>
int power(int a, int b)
{
    return pow(a, b);
}
int main()
{
    int x, y, result;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    result = power(x,y);
    printf("X to the power y value: %d",result);

    return 0;
}
