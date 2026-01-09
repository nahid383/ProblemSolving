#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
         char x[5];
        scanf("%s",x);
        int length = strlen(x);
        int digit=x[0] - '0';
        int digitpressed = (digit-1)*10;
              if(length==1)
                digitpressed = digitpressed + 1;
              else if(length==2)
                digitpressed = digitpressed + 3;
                else if(length==3)
                digitpressed = digitpressed + 6;
                 else if(length==4)
                digitpressed = digitpressed + 10;
                  printf("%d\n",digitpressed);
          }
          return 0;
      }

