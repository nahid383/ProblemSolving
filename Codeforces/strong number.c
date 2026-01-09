//sum of digis
#include<stdio.h>
#include<ctype.h>
int main()
{
    int num, rem, sum=0, temp,i,fact;
        printf("Enter any number: ");
        scanf("%d",&num);

        temp=num;

        while(temp!=0)
        {
            rem=temp%10;

            fact=1;
            for(i=1;i<=rem;i++)
            {
               fact=fact*i;
            }
            sum= sum+fact;
            temp=temp/10;

        }

if(num==sum)
    printf("This is a strong number.");
else
    printf("This is not any strong number.");
}
