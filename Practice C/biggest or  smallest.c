#include<stdio.h>
 int main()
 {
     int array[10],max=0;
     for(int i=0; i<10; i++)
     {
         scanf("%d ",&array[i]);
         if(array[i]>max)
            max=array[i];
     }
         printf("%d",max);

 }
