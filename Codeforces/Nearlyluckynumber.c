#include<stdio.h>

int main()
{
   long long array;
   scanf("%lld",&array);
   int count =0;
   while(array>0)
   {
        int digit = array%10;
        if(digit==4 || digit==7)
        {
            count++;

        }
        array= array/10;
   }
 if(count==4 || count==7)
 printf("Yes");
 else
 printf("No");

}




