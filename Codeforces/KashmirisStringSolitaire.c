#include<stdio.h>
#include<string.h>
#include<math.h>
void erasingstring(char string[], int length,int A, int B, int C)
{
     for(int i=0; i<length; i++)
        {
            if(string[i]=='A')
            A++;
            else if(string[i]=='B')
            B++;
            else if(string[i]=='C')
            C++;
        }
        if(length%2==0)
        {
            if(A==B && C==0)
        printf("Yes\n");
        else if(B==C && A==0)
        printf("Yes\n");
        else if(B==(A+C))
        printf("Yes\n");
        else
        printf("No\n");
        }
        else
        printf("No\n");
        
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char string[51];
        int A=0, B=0, C=0;
        scanf("%s",string);
        int length = strlen(string);
        erasingstring(string,length,A,B,C);
       
    }
}