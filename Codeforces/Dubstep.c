#include<stdio.h>
#include<string.h>

int main()
{
    char string[201];
    scanf("%s",string);
    int length= strlen(string);

int i=0;
   while(i<length)
    {
        if(string[i]=='W' && string[i+1]=='U' && string[i+2]=='B')
        {
           
            i=i+3;
        }
        else
        {
            printf("%c",string[i]);
            i++;

        }
        if(string[i]=='W' && string[i+1]=='U' && string[i+2]=='B')
        {
           printf(" ");
            i=i+3;
        }
      
       
    }
}