#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp= n;
    int product =1;
    int odd=0;
    while(temp!=0)
    {
        int rem = temp%10;
        if(rem%2!=0)
        {
      product = product * rem;
            odd++;
        }
        temp = temp/10;
    }
    if(odd==0)
    printf("-1");
    else
    printf("%d",product);
}