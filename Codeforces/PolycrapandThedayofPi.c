#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
         char pi[] = "314159265358979323846264338327";
         char n[31];
         scanf("%s",n);
         int length = strlen(n);
         int count=0; 
         for(int i=0; i<length; i++)
         {
            if(n[i]==pi[i])
            count++;
            else
            break;
         }
         printf("%d\n",count);
    }
}