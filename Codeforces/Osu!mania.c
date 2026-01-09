#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;

        scanf("%d",&n);
          char s[5];
        int result[n];
        for(int i=0; i<n; i++)
        {
                scanf("%s",&s);
              for(int j=0; j<4; j++)
              {
                  if(s[j]=='#'){
                    result[n-i-1]=j+1;
                  break;}
              }
        }
         for (int i = 0; i < n; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
    }
    }

