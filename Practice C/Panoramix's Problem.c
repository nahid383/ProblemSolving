#include<stdio.h>
int main()

{
    int n,m,i,j,count,primenumber;
    scanf("%d %d",&n,&m);
    for(i=n+1; i<=51; i++)
    {
        count=0;
        for(j=1; j<=i; j++)
        {
            if(i%j == 0)
                {
                count++;
                }
        }
        if(count==2)
        {
              break;
        }

    }

  if(i==m)
            printf("YES");
        else
            printf("NO");
}
