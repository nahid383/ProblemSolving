#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int hour,minute,flag=0;
        char s;
        scanf("%d%c%d",&hour,&s,&minute);
        if(hour>12){
        hour=(hour-12);
        flag=1;
        }
   else if(hour==12)
        {
            flag=1;
        }
        else if(hour<12)
        flag = 0;
       

        
        if(flag==1)
    {
        if(hour<10 && minute<10)
         printf("0%d%c0%d PM\n",hour,s,minute);
         else if(hour<10)
          printf("0%d%c%d PM\n",hour,s,minute);
          else if(minute<10)
           printf("%d%c0%d PM\n",hour,s,minute);
           
           else
            printf("%d%c%d PM\n",hour,s,minute);
    }
       
        else
        {
             if(hour==0)
        hour=12;
             if(hour<10 && minute<10)
         printf("0%d%c0%d AM\n",hour,s,minute);
         else if(hour<10)
          printf("0%d%c%d AM\n",hour,s,minute);
          else if(minute<10)
           printf("%d%c0%d AM\n",hour,s,minute);
           else if(hour==0)
           printf("12%c%d AM\n",s,minute);
           else
            printf("%d%c%d AM\n",hour,s,minute);
        }
       
    }
}