#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a; i<=b; i++)
    {
        int temp=i;
        int sum = 0;
        while(temp!=0)
        {
            int reminder = temp%10;
            sum = sum + pow(reminder,4);
            temp=temp/10;
        }
        if(sum==i)
        printf("%d ",sum);
    }
}