//circle
#include<stdio.h>
#include<math.h>
int main()
{
    float r, area;
    printf("Enter the value of radius of a circle: ");
    scanf("%f",&r);
    area=M_PI*r*r;
    printf("Area will be: %.3f",area);
    return 0;
}
