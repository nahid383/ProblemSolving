#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float p,q,R,Ar,Angle;
    printf("Enter two vector (p,q) & Alpha: ");
    scanf("%f%f%f",&p,&q,&Ar);

    R=sqrt((p*p)+(q*q)+(2*p*q*cos(Ar*M_PI/180.0)));
     q=(q*sin(Ar*M_PI/180.0));
    p=p+q*cos(Ar*M_PI/180.0);
    Angle= atan2(q,p) ;

    printf("Resultant is: %f\nAngle is: %f",R,Angle);
}
