#include<stdio.h>
int main()
{
    int startingpoint, endingpoint,num,count=0, totalprimenumber=0, sumofprimenumber=0,i;
    printf("Enter your starting point:");
    scanf("%d",&startingpoint);
    printf("Enter your ending point:");
    scanf("%d",&endingpoint);
    for(num=startingpoint; num<=endingpoint;  num++)
    {
        count=0;
        for(i=1;i<=num;i++)
        {
            if((num%i==0))
            {
                count++;
            }
        }
        if(count==2)
        {
             printf("%d ",num);
                totalprimenumber++;
                sumofprimenumber=sumofprimenumber+num;
        }
    }
    printf("\nTotal prime number is: %d\n",totalprimenumber);
    printf("Summation of the prime numbers: %d\n",sumofprimenumber);
}
