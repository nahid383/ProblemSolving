#include<stdio.h>
int main()
{
    int i, num, count, totalprimenumber=0,sumofprimenumbers=0,startingnum,endingnum;

    printf("Enter starting number: ");
    scanf("%d",&startingnum);

    printf("Enter ending number: ");
    scanf("%d",&endingnum);

    for(num=startingnum; num<=endingnum; num++)
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
       printf("Summation of prime numbers: %d\n",sumofprimenumbers);
}

