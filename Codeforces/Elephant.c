#include<stdio.h>
int main()
{
    int x,steps;
    printf("Enter the point of his friend house: ");
    scanf("%d",&x);
    steps=x/5;
    if(x%5==0)
    {
        printf("It will takes: %d steps.",steps);

    }
    else
        printf("It will take: %d steps.",steps+1);

    return 0;
}
