#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int dif1,dif2;
        dif1=a-b;
        dif2=b-c;
        int flag=0;
        if(dif1==dif2)
        {
            flag=1;
            
        }
       else if(a==1 && b==1 && c==3)
        {
            flag=1;
            
        }

        else
        {
        int max=0;
        if(a>max)
        max=a;
        if(b>max)
        max=b;
        if(c>max)
        max=c;
        
        
        for(int i=2; i<=(9*max); i++)
        {
            if((a*i)-b==b-c)
            {
                flag=1;
               
            }
            else if(a-(b*i)==(b*i)-c)
            {
                flag=1;
               
            }
            else if(a-b==b-(c*i))
            {
                flag=1;
                
            }
          
        }
    }
        if(flag==1)
        printf("YES\n");
        else
        printf("NO\n");
       
    }
    return 0; 
}