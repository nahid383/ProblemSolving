#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
         char string[n];
         scanf("%s",string);

         int white_count=0;
         int min_white=n;
         for(int i=0; i<k; i++)
         {
            if(string[i]=='W')
            white_count++;
         }
         min_white=white_count;
         for(int i=k; i<n; i++)
         {
            if(string[i]=='W')
            white_count++;
            if(string[i-k]=='W')
            white_count--;
            if(white_count<min_white)
            min_white=white_count;
         }
         printf("%d\n",min_white);
    }
}