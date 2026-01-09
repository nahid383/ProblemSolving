#include<stdio.h>
int main()
{
    int num1, num2, num3,num4,num5;

    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);
    num3=num1&num2;
    printf("Answer is: %d\n",num3);
    num4=num1|num2;
    printf("Answer is: %d\n",num4);
    num5=num1^num2;
    printf("Answer is :%d",num5);
}
