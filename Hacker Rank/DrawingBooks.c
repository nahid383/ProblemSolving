#include<stdio.h>
int main()
{
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
   int from_front=p/2;
   int from_backk=n/2 - p/2;
   if(from_backk<from_front)
   {
    printf("%d",from_backk);
   }
   else
   printf("%d",from_front);
}