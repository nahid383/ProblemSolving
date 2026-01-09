#include<stdio.h>
int main()
{
    int startingnum, endingnum, i, sum=0;

    printf("Enter starting point: ");
    scanf("%d",&startingnum);
    printf("Enter ending point: ");
    scanf("%d",&endingnum);
    printf("%d+....+%d",startingnum,endingnum);

    for(i=startingnum;i<=endingnum;i++)
    {
        sum=sum+i;
    }

    printf(" =  %d",sum);
}
