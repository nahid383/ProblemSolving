#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        char string[n][m];
        int count_has=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                scanf(" %c",&string[i][j]);
                if(string[i][j]=='#')
                {
                    count_has++;
                }
            }
            
        }
        
     int middlePos=(count_has/2)+1;
     count_has=0;
     int row=-1,col=-1;
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<m; j++)
         {
            
             if(string[i][j]=='#')
             {
                 count_has++;
             }
             if(count_has==middlePos)
             {
                row=i+1;
                col=j+1;
                break;
             }
         }
         if (row != -1) 
         break;
     }

     printf("%d %d\n",row,col);


    }
}