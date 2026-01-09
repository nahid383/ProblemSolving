#include<stdio.h>
int main()
{
    int n;
    int result;
    scanf("%d",&n);
    if(n>=0)
    printf("%d",n);
    else
    {
        int rem1= n/10;
       
        int rem2 = (n/100)  * 10+(n%10);
        if(rem2>rem1 )
      printf("%d",rem2);
        else
      printf("%d",rem1);
    }

}