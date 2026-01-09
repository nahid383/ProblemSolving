#include<stdio.h>
#include <stdlib.h>
int main()

{
  int n;
  scanf("%d",&n);
  int a[101][101];
  int diagonal1=0, diagonal2=0;
  for(int i=0; i<n; i++)
  {
      for(int j=0; j<n; j++)
      {
          scanf("%d",&a[i][j]);
          if(i==j)
            diagonal1=diagonal1+a[i][j];
           if(j+i==n-1)
            diagonal2=diagonal2+a[i][j];
      }

  }

        printf("%d",abs(diagonal1-diagonal2));
}
