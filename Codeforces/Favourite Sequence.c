#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int b[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&b[i]);
        }
                int a[n];
        int left = 0, right = n - 1;
        int index = 0;
      while(left<=right)
      {
          if(index%2==0)
          {
              a[index]=b[left++];
          }
          else
          {
              a[index]=b[right--];
          }
          index++;
      }
      for(int i=0; i<n; i++)
      {
          printf("%d ",a[i]);
      }
      printf("\n");
    }
}
