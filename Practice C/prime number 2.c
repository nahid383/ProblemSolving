#include<stdio.h>
int main()
{
    int i, num, count, totalprimenumber=0,sumofprimenumbers=0;

    for(num=20; num<=100; num++)
    {
    count =0;

    for(i=1;i<=num; i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d  ",num);
        totalprimenumber++;
        sumofprimenumbers=sumofprimenumbers+num;
    }

    }
       printf("\nTotal prime number is : %d\n",totalprimenumber);
       printf("Summation of prime numbers: %d",sumofprimenumbers);
}
