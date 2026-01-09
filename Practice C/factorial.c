#include<stdio.h>
int main()
{
    int i=1, num, fact=1;
    printf("Enter  any positive number: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
     {
         fact=fact*i;

     }

    printf("%d\n",fact);
}
