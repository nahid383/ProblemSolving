//Celcius to Farenhite
#include<stdio.h>
int main()
{
    float C, F;
        printf("Enter temperature in Celcius: ");
        scanf("%f",&C);
        F=9/5*C+32;
        printf("In Farenhite : %.3f",F);
        return 0;

}
