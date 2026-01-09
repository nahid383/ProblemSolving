#include<stdio.h>
int main()
{
    int num, i, result=1;
    printf("Enter last number: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        result=result*i;

        if(i==1)
            printf("\n1x");
        else if(i==num)
        printf("%d",i);
        else
            printf("%dx",i);

    }
    printf(" = %d",result);
}
