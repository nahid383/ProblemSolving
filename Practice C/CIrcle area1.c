#include<stdio.h>
#include<conio.h>
#define PI 3.1416
void main()
{
    float r, area;
  clrscr();
    printf("Enter value of r: ");

    scanf("%f",&r);
    area=PI * r * r;
    printf("\nArea= %f\n",area);
getch();
}
