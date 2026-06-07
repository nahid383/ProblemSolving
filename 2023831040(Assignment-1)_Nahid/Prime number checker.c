#include<stdio.h>
int main()
{
    int N,count=0;
        printf("Enter any integer number: ");

    scanf("%d",&N);

    for(int i=1; i<=N; i++)
    {
        if(N%i==0)
            count++;

    }
    if(count==2)
        printf("Number is prime");
    else
        printf("Number is not prime");
        return 0;
}
