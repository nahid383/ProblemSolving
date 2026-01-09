#include<stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,s,area,a,b,c;
    x1=-5;
    x2=4;
    x3=7;
    y1=1;
    y2=5;
    y3=-4;
    printf("Value of all the point of the triangle: (x1,y1)=(-5,1), (x2,y2)=(4,5), (x3,y3)=(7,-4)\n");

    a=sqrt(((-5-4)*(-5-4))+((1-5)*(1-5)));
    printf("a= %.3f\n",a);

     b=sqrt(((4-7)*(4-7))+((5+4)*(5+4)));
    printf("b= %.3f\n",b);

     c=sqrt(((7+5)*(7+5))+((-5)*(-5)));
    printf("c= %.3f\n",c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of the triangle: %.3f", area);


}
