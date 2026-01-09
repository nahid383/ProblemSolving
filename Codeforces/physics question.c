#include<stdio.h>
int main()
{
    float v,u,a,t,s;
    printf("Enter the value of u: ");
    scanf("%f",&u);
    printf("Enter the value of v: ");
    scanf("%f",&v);
    printf("Enter the value of t: ");
    scanf("%f",&t);
    a = (v-u)/t;
    printf("The value of a is %f.\n",a);
    s = (u*(2*t) )+ (2*a*t*t);
    printf("The value of s is %f",s);
}
