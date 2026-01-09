#include<stdio.h>
int main()
{
    float x, value;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    value=round(x);
    printf("round x= %f",value);
    return 0;
}
