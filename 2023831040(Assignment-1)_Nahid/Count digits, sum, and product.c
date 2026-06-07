#include<stdio.h>
int main()
{
    int number, sumofdigits=0, productofdigits=1,numberofdigits=0,rem;
    printf("Enter any positive number: ");
    scanf("%d",&number);
    while(number!=0)
    {
        rem = number%10;
        numberofdigits++;
        sumofdigits = sumofdigits+rem;
        productofdigits = productofdigits*rem;
        number=number/10;
    }
    printf("Number of digits: %d\n",numberofdigits);
    printf("Sum of digits: %d\n",sumofdigits);
    printf("Product of digits: %d\n",productofdigits);
    return 0;
}
