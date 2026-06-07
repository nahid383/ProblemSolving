#include<stdio.h>
int main()
{
    int number,rem,temp,reversedNumber=0;
    printf("Enter a positive number: ");
    scanf("%d",&number);
    temp=number;
    for( ; temp!=0; temp=temp/10)
    {
        rem=temp%10;
        reversedNumber = reversedNumber * 10 + rem;
    }

    printf("Reversed Number is: %d\n",reversedNumber);
    return 0;
}
