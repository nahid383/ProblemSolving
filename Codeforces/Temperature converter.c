#include<stdio.h>
int main()
{
    int choice;
    float temp, ctemp;

    printf("Temperature converter menu: \n");
    printf("1. Fahrenheit to Celsius \n");
    printf("2. Celsius to Fahrenheit \n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
        printf("Enter your Fahrenheit temperature: ");
        scanf("%f",&temp);
        ctemp=(temp-32)/9*5;
        printf("Temperature in Celsius: %.3f",ctemp);
        }
        break;
    case 2:
        {
                    printf("Enter your Celsius temperature: ");
        scanf("%f",&temp);
        ctemp=1.8*temp+32;
        printf("Temperature in Fahrenheit: %.3f",ctemp);
        }
        break;
    }
    return 0;
}
