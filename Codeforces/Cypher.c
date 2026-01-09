#include<stdio.h>
int main()
{
    int t; 
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);

        }
        for(int i=0; i<n; i++)
    {  
        int bi;
           
            char moves[11];
            scanf("%d %s",&bi,moves);
        
        for(int j=0; j<bi; j++)
        {
            if(moves[j]=='U')
            
            {
                a[i]=(a[i]-1+10)%10;
            }
            else if(moves[j]=='D')
            {
                a[i]=(a[i]+1)%10;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    }

}