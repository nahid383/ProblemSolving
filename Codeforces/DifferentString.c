#include<stdio.h>
#include<math.h>
#include<string.h>
int main()

{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char stirng[11];
        scanf("%s",stirng);
        char cha = stirng[0];
        int length = strlen(stirng);
        int flag=0;
        for(int i=0; i<strlen(stirng); i++)
        {
            if(stirng[i]!=cha)
            flag=1;
        }
        if(flag==0)
        printf("NO\n");
        else if(stirng[0]==stirng[length-1])
        {
            printf("YES\n");
            printf("%c",stirng[length-1]);
            printf("%c",stirng[0]);
            for(int i=1; i<length-1; i++)
            {
                printf("%c",stirng[i]);
            }
            printf("\n");

        }
        else
        {
            printf("YES\n");
         
          for(int i=length-1; i>length/2-1; i--)
                printf("%c",stirng[i]);
                for(int i=0; i<=length/2-1; i++)
                printf("%c",stirng[i]);
               
           
        }
         printf("\n");
    }
}