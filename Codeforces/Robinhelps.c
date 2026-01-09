#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, k;
        scanf("%d %d",&n,&k);
        int a[n];
        int robin_gold = 0;
        int zero =0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>=k)
          robin_gold=robin_gold+a[i];
           else if(a[i]==0 && robin_gold>0)
           {
            robin_gold--;
            zero++;
           }
        }
       printf("%d\n",zero);
    }
}