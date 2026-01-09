//0     1       1       2       3       5       8       13      21

#include<stdio.h>
int main()
{
    int n,first=0,second=1,fibo,count=0;
    printf("Enter range: ");
    scanf("%d",&n);

    while(count<n)
    {
        if(count<=1)
            fibo=count;
        else
        {
            fibo=first+second;
        first=second;
        second=fibo;
        }
            printf("%d   ",fibo);
    count++;
    }


}
