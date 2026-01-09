//positive or negative

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a value: ");
    scanf("%d",&num);

    if(num>0)
        printf("Number is positive.");
    else
        printf("Number is negative.");

    return 0;
}
