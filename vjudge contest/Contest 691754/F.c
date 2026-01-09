#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int array[n];
        for(int i=0; i<n; i++)
        {
        scanf("%d",&array[i]);
        }

        int maximum_sum = array[0];
        int current_sum = 0;

        for(int i=0; i<n; i++)
        {
            current_sum = current_sum + array[i];

            if(current_sum>maximum_sum)
            maximum_sum = current_sum;

            if(current_sum<0)
            current_sum = 0;

            
        }
        printf("%d\n",current_sum);
    }
    return 0;
}