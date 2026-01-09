#include<stdio.h>
int main()
{
    int num1, num2, large, small;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2);
    large= num1>num2 ? num1:num2;
    printf("Large number is : %d\n",large);
    small=num1<num2 ? num1:num2;
    printf("Small number is: %d",small);
    return 0;
}
