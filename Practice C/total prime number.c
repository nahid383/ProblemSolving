#include<stdio.h>
int main()

{
    int num, i, count, totalprimenumber=0,sumofprimenumber=0;

    for(num=1; num<=100; num++)
    {
        count = 0;

        for(i=1; i<=num; i++)
        {
            if(num%i==0)
            {
                count ++;

            }
        }
        if(count==2){
            printf("%d   ",num);
            totalprimenumber ++;
            sumofprimenumber=sumofprimenumber+num;

        }
    }

    printf("\nTotal prime number: %d\n",totalprimenumber);

    printf("\nSum of prime numbers: %d\n",sumofprimenumber);
    return 0;
}

