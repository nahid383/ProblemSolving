#include<stdio.h>
int main()
{
    float farenhite, celcius,c,f;
    printf("Enter the value of Celcius: ");
    scanf("%f",&celcius);
    printf("Enter the value of Fahrenhite: ");
    scanf("%f",&farenhite);
    f = (1.8*celcius) + 32;
    c = (farenhite - 32)/1.8;
    printf("%f %f",f,c);

}
