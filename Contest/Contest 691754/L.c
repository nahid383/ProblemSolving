#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        if(t != 0) {
            printf("\n");  
        }

            int n, q;
        scanf("%d %d",&n,&q);
        int array[n];
        for(int i=0; i<n; i++)
        {
                scanf("%d",&array[i]);
        }
        while(q--)
        {
            int sum = 0;
                 int a,b;
            scanf("%d %d",&a,&b);
            for(int i=a; i<=b; i++)
            {
                sum = sum + array[i];

            }

            printf("%d\n",sum);
        }
        printf("\n");
    }
}