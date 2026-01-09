#include<stdio.h>
int main()
{
    int i, num, fact,sum=0, tem,rem;
    printf("Enter any number:");
    scanf("%d",&num);
    tem=num;
    while(tem!=0)
    {
    rem=tem%10;
    fact=1;
    for(i=1; i<=rem; i++)
    {
        fact =fact*i;
    }
    sum=sum+fact;
    tem=tem/10;

    }
   if(sum==num)
    printf("This is a strong number:");
    else
     printf("This is not a strong number:");




}
