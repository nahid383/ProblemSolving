#include<stdio.h>
int main()
{
    int num, temp,count=0,reminder;
    printf("Enter any number: ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {

        temp=temp/10;
     count++;
    }
    printf("Total number of digits: %d",count);

}
