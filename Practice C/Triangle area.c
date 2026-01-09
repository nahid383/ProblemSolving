//3 hand area

#include<stdio.h>
int main()
{

    float a,b,c,s,area;
    printf("Enter all value: ");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area is: %.4f",area);
    return 0;
}
