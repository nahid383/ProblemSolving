//factorial= n!/(r! * (n-r)!)

#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=2; i<=x; i++)
    fact=fact*i;
    return fact;
}
int main()
{
    int n,r;
    scanf("%d %d",&n, &r);
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);
    int result = nfact/(rfact*nrfact);

    printf("%d",result);
    return 0; 
}