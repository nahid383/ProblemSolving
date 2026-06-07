#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[101];
        scanf("%s",s);
        int lenght = strlen(s);
        int count=0;
        for(int i=0; i<lenght; i++)
        {
            if(s[i]== 'N' || s[i]== 'W' || s[i]== 'D')
            continue;
            count++;
        }
        if(count<6)
        {
            if(count==1)
            printf("%d BALL",count);
            else
            printf("%d BALLS",count);
        }
       
        else if(count%6==0)
        {
            if(count/6==1)
            printf("%d OVER",count/6);
            else  
            printf("%d OVERS",count/6);
        }
      
        else
        {
            int over = count/6;
            int ball = count - (over*6);
            if(ball==1 && over==1)
            printf("%d OVER %d BALL",over,ball);
            else if(ball>1 && over==1)
            printf("%d OVER %d BALLS",over,ball);
            else if(ball==1 && over>1)
            printf("%d OVERS %d BALL",over,ball);
            else
            printf("%d OVERS %d BALLS",over,ball);
        }
        printf("\n");
    }
}