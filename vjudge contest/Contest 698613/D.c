#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char string1[101];
    scanf("%s",string1);
    int length = strlen(string1);
    int  count=0;
    for(int i=0; i<length/2; i++)
    {
       if(string1[i]!=string1[length-i-1])
       {
        count++;
       }
     
    }
    printf("%d\n",count);
}