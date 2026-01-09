#include<stdio.h>
int main()
{
    float x, value;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    value=ceil(x);
    printf("ceil x= %f",value);
    return 0;
}
