#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char string[101];
    scanf("%s",string);
    int length = strlen(string);
          
    for(int i=0; i<length; i++)
    {
       
        char c = string[i];
         c = tolower(c);
        if(c=='A' || c=='a' || c=='E' || c=='e' || c=='I' || c=='i' || c=='O' || c=='o' || c=='U' || c=='u' || c=='Y' || c=='y')
        printf("");
        else
        {
       
                 printf(".%c",c);
        }
       
    }
}