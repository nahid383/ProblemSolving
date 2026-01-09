#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float x,n,m;
        scanf("%f %f %f",&x,&n,&m);
        float remai = x - (m*10);
        float test = x;
        
        for(float i=0; i<n; i++)
        {
            
            test = (test/2) + 10;


        }
        float remainPoint_1 = test - (m*10);
        
        if( remai < 1|| remainPoint_1 < 1)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}