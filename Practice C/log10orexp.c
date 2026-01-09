#include<stdio.h>
int main()
{
    double x, result;

        printf("Enter the value of X: ");
        scanf("%lf",&x);
        result = exp(x);
        printf("log10x= %lf",result);
        return 0;

}

