#include<stdio.h>
int main()
{
    int x, y, result, i;
    printf("Enter the value of X: ");
    scanf("%d",&x);
    printf("Enter the value of Y: ");
    scanf("%d",&y);
    result = 1;
    for(i=1; i<=y; i++ )
    {
        result= result*x;
    }
    printf("Result: %d",result);
}
