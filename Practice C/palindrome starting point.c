#include<stdio.h>
int main()
{
    int num, temp,reminder,sum=0;
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        reminder=temp%10;
        sum=sum*10+reminder;
        temp=temp/10;

    }
    if(num==sum)
    printf("true");
    else
    printf("false");
}
