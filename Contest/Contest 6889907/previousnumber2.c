#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);
    for(int i=n-1; i>=0; i--)
    {
        if(i%5==0)
        {
            printf("%d",i);
            break;
        }
 
    }
    return 0;
}