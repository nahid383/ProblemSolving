#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        char string[n];
        scanf("%s",string);
        int count = 0;
        for(int i=0; i<n; i++)
        {
            if(string[i]=='p' && string[i+1]=='i' && string[i+2]=='e'){
                count++;
                i=i+2;
            }

            else if(string[i]=='m' && string[i+1]=='a' && string[i+2]=='p'){
                count++;
                i=i+2;
            }

        }
        printf("%d\n",count);
    }
    
}