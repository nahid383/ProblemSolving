#include<stdio.h>
int main()
{
    float loan, interestrate, totalpayableamount, monthlypayableamount,year;

    printf("Enter your amount of Loan : ");
    scanf("%f",&loan);
    printf("Enter the interest rate: ");
    scanf("%f",&interestrate);
    printf("Enter Number of Years: ");
    scanf("%f",&year);
    totalpayableamount = loan + loan*(interestrate/100);
    monthlypayableamount = totalpayableamount/(year*12);
    printf("You have to pay %.3f tk per month.",monthlypayableamount);

}
