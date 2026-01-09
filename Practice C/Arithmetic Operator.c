//copy of R3

#include<stdio.h>
int main()
{
    int num1,num2,sum,sub,mul,dev,rem;
    float avg;
    printf("Enter both number: ");
    scanf("%d%d",&num1,&num2);

    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    dev=num1/num2;
    rem=num1%num2;
    avg=(float)sum/2;

    printf("Summation will be: %d\n",sum);
    printf("Substraction will be: %d\n",sub);
    printf("Multiplication will be: %d\n",mul);
    printf("Devidation will be: %d\n",dev);
    printf("Reminder will be: %d\n",rem);
    printf("Summation will be: %d\n",sum);
    printf("Average will be: %f\n",avg);

    return 0;
}
