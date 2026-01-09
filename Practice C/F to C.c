//Farenhite to Celcius
#include<stdio.h>
int main()
{
    float F, C;
    printf("Enter temperature in Farenhite: ");
    scanf("%f",&F);
    C=(F-32)/9*5;
    printf("Celcius will: %f",C);
    return 0;
}
