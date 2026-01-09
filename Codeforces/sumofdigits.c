#include<stdio.h>
int main()
{
    int num,rem,temp, sum=0;
    printf("Enter any number: ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        rem = temp%10;
  sum=sum+rem;
  temp=temp/10;
    }

printf("Sum of this digit is: %d",sum);
}
