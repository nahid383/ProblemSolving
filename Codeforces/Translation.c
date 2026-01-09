#include<stdio.h>
#include<string.h>
int main()
{
    char s[101], t[101];
    int i,length_s, length_t;
    scanf("%s",&s);
    scanf("%s",&t);
    length_s=strlen(s);
    length_t=strlen(t);
   if(length_s!=length_t)
   {
       printf("NO");
       return 0;
   }
   for(i=0; i<length_s; i++)
   {
       if(s[i]!=t[length_s-1-i])
       {
           printf("NO");
           return 0;
       }
   }
   printf("YES");
    return 0;
}
