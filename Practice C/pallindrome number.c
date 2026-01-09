#include<stdio.h>
int main()
{
    int originalnumber, sum=0, temp,reminder,reversenumber;
    printf("Enter any number: ");
    scanf("%d",&originalnumber);

    temp=originalnumber;
    while(temp!=0)
    {
        reminder=temp%10;
        sum=sum*10+reminder;
        temp=temp/10;
    }



    if(originalnumber==sum)
        printf("This is a palindrome number.\n ");
    else
        printf("This is not any palindrome number.\n");

    return 0;
}

