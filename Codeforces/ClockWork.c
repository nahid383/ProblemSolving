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
        for(int i=0; i<n; i++)
        {
                scanf("%d",&a[i]);

        }
        int flag=0;
      for(int i=0; i<n; i++)
      {
        if(a[i]<=i*2 || a[i]<=(n-i-1)*2)
        {
            flag=1;
            
        }
      }
      if(flag==1)
      printf("Yes\n");
      else
      printf("No\n");

    }
}