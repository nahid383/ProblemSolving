#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char string[100];
        scanf("%s",string);
        int countOne=0;
        int countZero=0;
        for(int i=0; i<strlen(string); i++)
        {
            if(string[i]=='1')
            {
                countOne++;

            }
            else
            {
                countZero++;

            }

        }
        if(countOne>0 && countZero>0)
        {
            if(countOne%2==0 && countZero>=countOne)
            {
                printf("NET\n");

            }
            else if(countZero%2==0 && countZero<=countOne)
            {
                printf("NET\n");

            }

            else if(countOne%2!=0 || countZero%2!=0)
            {
                printf("DA\n");
            
            }
            else
            {
                printf("NET\n");

            }

        }
        else
        {
            printf("NET\n");

        }
    }
}