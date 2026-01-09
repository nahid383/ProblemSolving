#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int minimum_moves=0;
        int n;
        scanf("%d",&n);
        if(n==1){
        printf("0\n");
        continue;
        }
        int count=0;
        
       
        while(n!=1)
        {
            if(n%6==0)
            {
                n=n/6;
            }
            else if(n%3==0)
            {
                n=n*2;
            }
            else 
            {
                printf("-1\n");
                goto nextcase;
            }
            count++;
       
        }
        printf("%d\n",count);
        nextcase:;

    }
       return 0;
}