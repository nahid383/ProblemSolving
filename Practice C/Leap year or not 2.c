#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year: ");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("This is a leap year.");
    }
    else  if(year%4==0&&year%100!=0)
    {
        printf("This is a leap year.");
    }
    else
        printf("This is not any leap year.");

    return 0;
}
