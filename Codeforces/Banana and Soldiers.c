#include<stdio.h>
int main()
{
    int k, n, w, dollar,i,totaldollar=0,price;          // he has to borrow dollar
    scanf("%d",&k);      // k dollars for the 1st bananas
    scanf("%d",&n);      // has n dollars
    scanf("%d",&w);       // number of bananas w

    for(i=1; i<=w; i++)
    {
        totaldollar+=i*k;

    }

 dollar=totaldollar-n;
 if(dollar<0)
 {
      printf("0\n");
 }

 else if(dollar>=0)
 printf("%d",dollar);
}
