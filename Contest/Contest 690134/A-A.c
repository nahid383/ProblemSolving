#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int A=0, B=0, C=0;
        char string[51];
        scanf("%s",string);
        int length = strlen(string);
        for(int i=0; i<length; i++)
        {
          if(string[i]=='A')
          A++;
          else if(string[i]=='B')
          B++;
          else if(string[i]=='C')
          C++;
        }
        if(length%2==0){
        if(C==0 && A==B)
        printf("YES\n");
        else if(A==0 && B==C)
        printf("YES\n");
        else if(B==A+C)
        printf("YES\n");
        else
        printf("NO\n");
        }
        else
        printf("NO\n");
    }

    return 0;
}