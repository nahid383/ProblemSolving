#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a, &b);
    int light_up=a;
    int rem=0;
    while(a>=b)
    {
        light_up=light_up+(a/b);
        a= (a/b)+(a%b);
    }

    printf("%d\n",light_up);

}