#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int flag =0;
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%444==0 || n%447==0 || n%474==0 || n%744==0 || n%747==0 || n%777==0)
    {
        printf("YES\n");
        return 0;
    }
    while(n!=0)
    {
        int rem = n%10;
        
        if(rem !=4 && rem != 7){
           flag=1;
        }
        n = n/10;
       
       
    }
    if(flag==1)
    printf("NO\n");
    else if(flag==0)
    printf("YES\n");
    return 0;
}