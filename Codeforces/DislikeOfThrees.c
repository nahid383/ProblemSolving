#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    int a[1001], i=1, n=1;
    while(i<=1000)
    {
        if(n%3!=0 && n%10!=3)
        {
            a[i]=n;
            i++;
        }
        n++;
    }
    while(t--)
    {
        int k; 
        scanf("%d",&k);
        printf("%d\n",a[k]);
    }
    return 0;
    
}