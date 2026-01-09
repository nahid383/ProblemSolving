//1+1/2+1/3+1/4+1/5+....+1/n

#include<stdio.h>
int main()
{
    float i, num, sum=0;
    printf("Enter last number: ");
    scanf("%f",&num);


    for(i=1;i<=num;i++)
    {
        sum=sum+(1/i);
        if(i==1)
        {
            printf("\n1+ ");
        }
        else if(i==num)
        {
            printf("1/%.0f ",i);
        }
        else
        {
            printf("1/%.0f+ ",i);
        }

    }
    printf(" = %.3f",sum);
}
