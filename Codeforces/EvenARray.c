#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int evenwrong=0;
        int oddwrong=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);

            if(i%2==0 && a[i]%2!=0)
            {
                evenwrong++;
            }
            if(i%2!=0 && a[i]%2==0)
            {
                oddwrong++;
            }

        }
        if(oddwrong==evenwrong)
        {
            printf("%d\n",evenwrong);
        }
        else
        {
            printf("-1\n");
        }
       
    }
    return 0;
}