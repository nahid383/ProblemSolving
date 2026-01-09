#include<stdio.h>
#include<math.h>
int main()
{
    float range, r;
    printf("Enter value of radius: ");
    scanf("%f",&r);
    range = 2*3.1416*r;
    printf("Range of the circle is: %.4f",range);
}
