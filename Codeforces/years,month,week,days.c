#include<stdio.h>
int main()
{
    int days1,remainingdays,years,month,weeks,days;
    scanf("%d",&days1);
    years = days1/365;
    remainingdays  = days1-(years*365);
    month = remainingdays/30;
    remainingdays=remainingdays-(month*30);
    weeks = remainingdays/7;
    remainingdays=remainingdays-(weeks*7);
    days=remainingdays;
    printf("%d years, %d months, %d weeks, %d days",years,month,weeks,days);

}
