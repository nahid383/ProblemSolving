#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter both number: ");
    scanf("%d%d",&num1,&num2);

    if(num1>num2)
        printf("num1 is bigger and num2 is smaller");
    else if(num2>num1)
        printf("num2 is bigger and num1 is smaller");
    else
        printf("Both are equal");

    return 0;
}
