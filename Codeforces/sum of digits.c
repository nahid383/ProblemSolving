//sum of digis
#include<stdio.h>
#include<ctype.h>
int main()
{
    int num, rem, sum=0, temp;
        printf("Enter any number: ");
        scanf("%d",&num);

        temp=num;

        while(temp!=0)
        {
            rem=temp%10;
            sum= sum+rem;
            temp=temp/10;

        }

        printf("Sum of digits is: %d",sum);
}
