#include<stdio.h>
    int power(int a, int b)
{

    return pow(a, b);
}
int main()
{
    int x,y,result;
    printf("Enter the value of X & Y: ");
    scanf("%d  %d",&x,&y);
    result= power(x, y);
    printf("Result of X to the power Y is: %d",result);

    return 0;

}
