#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int value[n+1];
     
        for(int i=1; i<=n; i++)
        {
            value[i] = pow(2, i);
        }
        int summation = 0;
        int subtraction = 0;
        for(int i=1; i<=n; i++)
        {
            if(i==n)
            summation=summation+value[i];
            else if(i< n/2)
            summation=summation+value[i];
            else
                subtraction=subtraction+value[i];

        }
       int result = abs(summation - subtraction);
        printf("%d\n", result);
    }
}