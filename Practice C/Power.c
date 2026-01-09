//power
#include<stdio.h>
int main()
{
    int x, y,value;
    printf("Enter the value of X: ");
    scanf("%d",&x);
    printf("Enter the value of Y: ");
    scanf("%d",&y);

    value = pow(x,y);
    printf("Answer is : %d",value);
    return 0;

}
