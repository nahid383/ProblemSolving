#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",str);

        int cost = 0;
        int minimum_cost = 0;

        for(int i=0; i<n-1; i++)
        {
            if(str[i]==str[i+1])
            {
                cost++;
                if(cost>minimum_cost)
                {
                    minimum_cost = cost;
                }
            }
            else
            {
                cost = 0;
            }

        }
        printf("%d\n",minimum_cost+2);
    }
    
}