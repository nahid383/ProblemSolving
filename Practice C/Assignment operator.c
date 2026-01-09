//assignment operator
#include<stdio.h>
int main()
{
    int a,b,c,d,e;

    printf("Enter value of a= ");
    scanf("%d",&a);
    printf("Enter value of b= ");
    scanf("%d",&b);
    printf("Enter value of c= ");
    scanf("%d",&c);
    printf("Enter value of d= ");
    scanf("%d",&d);
    printf("Enter value of e= ");
    scanf("%d",&e);

    a+=2;
    b-=2;
    c*=2;
    d/=2;
    e%=2;

    printf("1st assignment value is: %d\n",a);
    printf("2nd assignment value is: %d\n",b);
    printf("3rd assignment value is: %d\n",c);
    printf("4th assignment value is: %d\n",d);
    printf("5th assignment value is: %d",e);

    return 0;
}
