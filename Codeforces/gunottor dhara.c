//gunottor dhara
//1*2+2*3+3*4+4*5+5*6+....+n1*n2

#include<stdio.h>
int main()
{
    int n1, n2, a=1,b=2,sum=0;

    printf("Enter value of n1 & n2: ");;
    scanf("%d%d",&n1,&n2);
    printf("1x2+2x3+3x4+...+%dx%d ",n1,n2);

    while(a<=n1&&b<=n2)
    {
        sum=sum+(a*b);          /*sum=0+1*2=2
                                                sum=2+2*3=8
                                                sum=8+3*4=20*/
        a=a+1;                          // a=1,2,3
        b=b+1;                          //b=2,3,4

            }

            printf("= %d",sum);
}
