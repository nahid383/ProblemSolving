#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char n[11];
        scanf("%s",n);
        int num = atoi(n);
        if(num>=1 && num<=9)
        {
            printf("%d\n",num);
        }
        else
        {
           
            int count = 9;
            for(int i=10; i<=num; i++)
            {
                int flag = 0; 
                int l = strlen(n);
               
                for(int j=0; j<l-1; j++)
                {
                    if(n[j]!=n[j+1])
                    flag=1;
                    
                }
                if(flag==0)
                count++;
            }
       
            printf("%d\n",count);
        }
    }
    
}