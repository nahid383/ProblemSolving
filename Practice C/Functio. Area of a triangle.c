#include<stdio.h>
double trianglearea(double b, double h)
{
    return .5*b*h;
}
int main()
{
    double base, height, area;
    printf("Enter Base: ");
    scanf("%lf",&base);
    printf("Enter Height: ");
    scanf("%lf",&height);

    area=  trianglearea(base, height);
    printf("Area of the triangle is: %.2lf",area);
}
