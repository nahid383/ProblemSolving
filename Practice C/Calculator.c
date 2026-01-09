//making a calculator
#include<stdio.h>
#include<math.h>
int main()
{
    float dev,sqr0t;
    int num1, num2,sum,sub,prod,rem,squ;
    printf("What do you want to do?\n");
    char op;
    printf("Operators are: + , - , * , / , ^, $, %% \n");
    printf("For Summation = '+'\n");
    printf("For Subtraction = '-'\n");
    printf("For Product or Multiply = '*'\n");
    printf("For Portion or Divide = '/'\n");
    printf("For Reminder = '%%'\n");
    printf("For Square = '^'\n");
    printf("For SquareRoot = '$'\n");


    printf("Enter any operator: ");
    scanf("%c",&op);
    if(op=='^' || op=='$')
    {
        printf("Enter any number: ");
        scanf("%d",&num1);
        if(op=='^')
        {
            squ = num1*num1;
            printf("Square will be: %d\n",squ);
        }
        else
        {
            sqr0t = (float)sqrt(num1);
            printf("Square-Root will be: %.3f\n",sqr0t);
        }
     
        return 0;
    }
    printf("Enter 1st Number: ");
    scanf("%d",&num1);
    printf("Enter 2nd Number: ");
    scanf("%d",&num2);

    switch(op)
    {
    case '+':
    {
        sum= num1+num2;
        printf("Summation is: %d\n",sum);
    }
    break;
    case '-':
    {
        sub= num1-num2;
        printf("Subtraction will be: %d\n",sub);
    }
    break;
    case '*':
    {
        prod= num1*num2;
        printf("Product will be: %d ",prod);
    }
    break;
    case '/':
    {
        dev= (float)num1/num2;
        printf("Portion will be: %.3f\n",dev);
    }
    break;
    case '%':
    {
        rem= num1%num2;
        printf("Reminder will be: %d\n",rem);
    }
    break;
    default :
        printf("Please enter correct operator.\n");
    }

    return 0;
}
