#include<stdio.h>
 int main()
 {
     int t;
scanf("%d",&t);
     for(int i=1; i<=t; i++)
     {
         char s[4];
         scanf("%s",&s);
         if((s[0] == 'y' || s[0] == 'Y') &&
            (s[1] == 'e' || s[1] == 'E')  &&
            (s[2] == 's' || s[2] == 'S')){
            printf("YES\n");}
         else{
            printf("NO\n");}
     }
    return 0;
 }
