//Array Declaration
//array initialization
//sum of array
#include<stdio.h>
int main()
{
    int i, num[5], sum=0,Average;
    for(i=0; i<=4; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0; i<=4; i++)
    {
        printf("%d  ",num[i]);
    }
    i=0;
   while( i<=4)
   {
       sum=sum+num[i];
       i++;
   }
    printf("Summation is: %d\n",sum);

    Average=sum/5;
    printf("Average : %d",Average);
}
