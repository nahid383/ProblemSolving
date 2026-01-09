//Quadratic Equation

#include<stdio.h>
int main()
{
    int a,b,c,d;
    float x1,x2;
    printf("Enter the value of  a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);

    d=sqrt(b*b-4*a*c);
    x1=(float)(-b+d)/(2*a);
    x2=(float)(-b-d)/(2*a);

    printf("Solve of the eqation x1= %.2f and x2= %.2f",x1,x2);
    return 0;
}
