#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        int d1=abs(x-z);
        int d2=abs(y-z);
        if(d1==d2)
        {
            printf("Mouse C\n");
        }
        else if(d1>d2)
        {
            printf("Cat B\n");
        }
        else
        {
            printf("Cat A\n");
        }
    }
    
}