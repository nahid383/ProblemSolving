#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}


int main()
{
    int result = fact(10);
    printf("Factorial of number 10 is: %d",result);
}
