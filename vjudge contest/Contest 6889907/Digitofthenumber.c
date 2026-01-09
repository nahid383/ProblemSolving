#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp= n;
    while(temp!=0)
    {
        int rem = temp%10;
        printf("%d\n",rem);
        temp = temp/10;
    }
}