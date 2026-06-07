#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int num = a; num<= b; num++)
    {
        int temp = num;
        int isOdd=1;
        while (temp>0)
        {
            int digit = temp % 10;
            if(digit%2==0){
            isOdd=0;
            break;
            }
            temp=temp/10;
        }
        if(isOdd)
        {
            printf("%d ",num);
        }
        
    }
}