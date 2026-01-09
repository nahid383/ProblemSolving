#include<stdio.h>

void increment(int *x)
{
   *x = *x+1;
}
int main()
{
    int num=5; 
    increment(&num);
    printf("%d",num);
}