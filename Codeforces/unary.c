//unary plus, unary minus, increment, decrement

#include<stdio.h>
int main()
{
    int x, result;

    printf("Enter value of x: ");
    scanf("%d",&x);
    result=++x;
    printf("Result is: %d",result);
    return 0;
}
