#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n-1];
        int negative_sum = 0;
        int positive_sum = 0;
        for(int i=0; i<n-1; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]<0)
            {
                negative_sum = negative_sum + a[i];

            }
            else
            {
                positive_sum = positive_sum + a[i];

            }

        }
        int efficiency = abs(negative_sum) - positive_sum;
        printf("%d\n",efficiency);
    }
    
}