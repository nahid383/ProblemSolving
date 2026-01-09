#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int count  =  0;
    while(x>0)
    {
        if(x%2==1)
        {
            count++;
        }
        x=x/2;
    }
    printf("%d",count);
}