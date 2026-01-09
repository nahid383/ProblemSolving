#include<stdio.h>
int square(int a)
{
    return a*a;
}
int main()
{
    int num, result;
    printf("Enter any number: ");
    scanf("%d",&num);
    result = square(num);
    printf("Square of the number is: %d",result);
return 0;
}
