#include<stdio.h>
int main()
{
    float x, value;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    value=trunc(x);
    printf("trunc
            x= %f",value);
    return 0;
}
