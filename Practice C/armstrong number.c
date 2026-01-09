#include<stdio.h>
int main()
{
    int num, temp, reminder,sum=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp=num;

    while(temp!=0)
    {
        reminder=temp%10;
        sum=sum+pow(reminder,3);
        temp=temp/10;
    }

    if(num==sum)
        printf("This is an armstrong number.");
    else
        printf("This is not any armstrong number.");
    return 0;
}
