//1-2+3-4+5-6......

#include<stdio.h>
int main()
{
    int n, result,i,even=0,odd=0;
    printf("Enter last number: ");
    scanf("%d",&n);

for(i=1; i<=n; i++)
    {

        if(i%2==0)
            even=even+i;
        else
            odd=odd+i;

    }
    printf("Result= %d",odd-even);
}
