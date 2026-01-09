#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    if(n==1)
        printf("-1");
    else if(n%2==0)
    {
        for(int i=1; i<=n; i=i+1)
        {
            temp=i;
            i=i+1;
            printf("%d ",i);

            printf("%d ",temp);
        }
    }
    else if(n%2!=0)
    {
        int odd = (n/2)+1;
       for(int i=n; i>odd; i--)
       {
        printf("%d ",i);
       }
 printf("%d ",n/2);
  printf("%d ",odd);
  int even = (n/2)-1;
for(int i=even; i>=1; i--)
{
    printf("%d ",i);
}
    }
}
