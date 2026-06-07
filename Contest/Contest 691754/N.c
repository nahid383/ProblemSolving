#include<stdio.h>
int main()
{
    int n,k,q;  
    /*n=no of recipes of coffe she knows
        k= no of recipes of coffe recomended it
        q= no of questions she has
    */
   scanf("%d %d %d",&n,&k,&q);
   int l[n],r[n];
   for(int i=0; i<n; i++)
   {
    scanf("%d %d",&l[i],&r[i]);

   }

   int a[q],b[q];

   for(int i=0; i<q; i++)
   {
    scanf("%d %d",&a[i],&b[i]);

   }

   
}