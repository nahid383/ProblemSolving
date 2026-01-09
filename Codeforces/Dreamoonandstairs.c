#include<stdio.h>
int main()
{
    int n,m;
    int count;
    scanf("%d %d",&n,&m);
    if(n%2==0)
    count = n/2;
    else
    count=n/2 +1;
    if(n/m==0)
    printf("-1");
    else if(count%m!=0){
    while(count%m!=0)
    {
       count++;
    }
    printf("%d",count);
}
    else
    printf("%d",count);
}