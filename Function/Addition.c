#include<stdio.h>
int addition(int a, int b, int c, int d)
{
    return a+b+c+d;
}
int main()
{
    int a, b, c, d;
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the 3rd number: ");
    scanf("%d",&c);
    printf("Enter the 4th number: ");
    scanf("%d",&d);
    int sum = addition(a,b,c,d);
    printf("Summation is: %d",sum);   
    return 0;
}