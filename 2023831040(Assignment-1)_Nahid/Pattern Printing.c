#include<stdio.h>
int main()
{
    int i,j,number;
    printf("Hi! Enter a positive number: ");
    scanf("%d",&number);
    for(i=1; i<=number; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
