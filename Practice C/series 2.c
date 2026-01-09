//1+3+5+7+......+n
//somantor dhara

#include<stdio.h>
int main()
{
    int num, i, sum=0;

    printf("Enter the last number: ");
    scanf("%d",&num);



    if(num%2==0)
        printf("Please enter correct order number.");
    else{
            printf("1+3+5+7+.....+%d ",num);

    for(i=1; i<=num;i=i+2)
    {
        sum=sum+i;

    }
    printf("= %d",sum);
    }

    return 0;
}
