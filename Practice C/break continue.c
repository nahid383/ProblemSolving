#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=30;i++)
    {
   if(i%9==0)
    continue;
   printf("%d\n",i);

   if(i==23)
    break;
    }
   return 0;
}
