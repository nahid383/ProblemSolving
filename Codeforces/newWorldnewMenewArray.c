#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int  n,k,p;
        scanf("%d %d %d",&n,&k,&p);
        int minimum_operation;
        if(k<-n*p||k>n*p)
            printf("-1\n");
        else
        {
            minimum_operation= abs(k)/p;
            if(abs(k)%p!=0)
                minimum_operation++;

        if(minimum_operation<n)
        printf("%d\n",minimum_operation);
        else
        printf("-1\n");
        }
    }
}