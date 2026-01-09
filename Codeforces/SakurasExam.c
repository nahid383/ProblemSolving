#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a%2==0 && b%2==0)
        printf("Yes\n");
       else if(b%2==1)
        {
            if(a>=2)
            {
                a=a-2;
                if(a%2==0)
                {
                    printf("YEs\n");
                }
                else
                printf("nO\n");
            }
            else
            printf("No\n");
        }
        else
        printf("No\n");
        
    }
}