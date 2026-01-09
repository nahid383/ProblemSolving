#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);

        while(t--)
    {
         char string[101];
        scanf("%s",string);
        int length = strlen(string);
        if(length%2==0)
        {
            int mid = length/2;
            int issquare =1;
           for(i=0; i<mid; i++)
                {
                if(string[i]!=string[mid+i])
                issquare =0;
                break;
                }
                if(issquare)
                    printf("Yes\n");
                else
                    printf("No\n");
        }
        else
            printf("No\n");
    }
}
