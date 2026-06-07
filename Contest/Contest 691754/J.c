#include<stdio.h>
int main()
{
    long long n,x;
    scanf("%lld %lld",&n,&x);
    int array[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    int sum=0;
    int subarrays = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            sum = sum + array[j];
            if(sum == x)
            {
                subarrays++;
                sum = 0;

            }
            else if(sum>x)
            {
                sum = 0;
            }

        }
    }
    printf("%d\n",subarrays);
}