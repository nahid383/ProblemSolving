#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,anton=0, danik=0;
    char s[n];
   scanf("%d",&n);
   scanf("%s",&s);
   for(i=0; i<n; i++)
   {
       if(s[i]=='A')
           anton++;
       else
           danik++;
   }
   if(anton>danik)
       printf("Anton");
   else if(danik>anton)
       printf("Danik");
   else
    printf("Friendship");
   return 0;
}
