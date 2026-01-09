//1.5+2.5+3.5+4.5+...+n.5
#include<stdio.h>
int main()
{
    float num, f, sum;
    printf("Enter last number: " );
    scanf("%f",&num);
    printf("1.5+2.5+3.5+....+% .1f",num);
    for(f=1.5;f<=num;f=f+1)
    {
        sum=sum+f;
    }
    printf("= %.2f",sum);
}
