#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int total_cubes=0;
    int current_level=1;
    int height=0;
   while(total_cubes+(current_level*(current_level+1))/2<=n)
   {
       total_cubes=total_cubes+(current_level*(current_level+1))/2;
              height++;
       current_level++;

   }
   printf("%d\n",height);
}
