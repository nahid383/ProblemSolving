#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    int coin=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                int tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }

    int h_sum;
        h_sum=(sum/2)+1;
        int coin_sum=0;
  for(int i=0; i<n; i++)
  {
        coin_sum=coin_sum+a[i];
        coin++;
        if(coin_sum>=h_sum)
        {
            break;
        }
  }
    printf("%d",coin);
}