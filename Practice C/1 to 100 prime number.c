#include<stdio.h>
void main()

{
    int num, i, count=0;

    for(num=1; num<=200; num++)
    {
        count = 0;
        for(i=1; i<=num; i++)
        {
            if(num%i==0)
            {
                count ++;
            }
        }
        if(count==2)
            printf("%d is a prime number.\n ",num);
    }

}
