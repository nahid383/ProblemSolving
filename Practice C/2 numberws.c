//big between 2/3 numbers

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2);

    if(num1>num2)
        printf("1st number value is more than 2nd number");
    else
        printf("2nd number value is more than 1st number");
}
