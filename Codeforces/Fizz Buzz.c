#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N%3==0 && N%5==0)
       printf("FizzBuzz");
    else if(N%3==0)
        printf("Fizz");
            else if(N%5==0)
            printf("Buzz");
}
