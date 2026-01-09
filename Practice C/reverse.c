#include<stdio.h>
#include<ctype.h>
int main()
{
    int num,temp,rem,sum=0;
    printf("Enter any number: ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)//temp=624,rev=426
    {
        rem=temp%10;//rem=4,temp=62,rem=2,rem=6
        sum=sum*10+rem;//sum=0+4,sum=4*10+2=42,sum=42*10+6=426
        temp=temp/10;//temp=6
    }

    printf("Reverse number : %d",sum);
 return 0;
}
