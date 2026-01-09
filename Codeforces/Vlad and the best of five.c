#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char string[6];
        int A=0, B=0;
              scanf("%s",&string);
        for(int i=0; i<5; i++)
        {

            if(string[i]=='A')
            A++;
            else
                B++;
        }
        if(A>B)
            printf("A\n");
        else
            printf("B\n");
    }
}
