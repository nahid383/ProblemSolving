#include<stdio.h>
int main()
{
    int i, num, exit, enter, passenger =0, maximum=0;
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        scanf("%d%d",&exit,&enter);
        passenger=enter-exit+passenger;
        if(maximum<passenger)
            maximum=passenger;
    }
    printf("%d",maximum);
}
