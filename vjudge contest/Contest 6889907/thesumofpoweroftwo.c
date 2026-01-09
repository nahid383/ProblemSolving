#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int sum = pow(2,n) + pow(2,m);
    printf("%d",sum);
    return 0;
}