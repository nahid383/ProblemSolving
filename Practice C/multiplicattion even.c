#include<stdio.h>
int main()
{
    int num, i, result=1;
    printf("Enter last number: ");
    scanf("%d",&num);
    for(i=2; i<=num; i=i+2)
    {
        result=result*i;

        if(i==2)
            printf("\n1x");
        else if(i==num)
        printf("%d",i);
        else
            printf("%dx",i);

    }
    printf(" = %d",result);
}

