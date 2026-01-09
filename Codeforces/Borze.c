#include<stdio.h>
#include<string.h>
int main()
{
    char array[201];
   scanf("%s",&array);
   int n=strlen(array);
   for(int i=0; i<n; i++)
   {
       if(array[i]=='.')
       {
                   printf("0");
       }
       else if((array[i]=='-') && (array[i+1]=='.'))
      {
           printf("1");
        i++;
      }
       else if((array[i]=='-') && (array[i+1]='-'))
       {
           printf("2");
        i++;
       }

   }
   printf("\n");
}
