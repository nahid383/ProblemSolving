#include<stdio.h>
int swap(int x, int y)
{
    int temp = x; 
    x=y; 
    y=temp;
    printf("%d %d",x,y);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap(a,b);

    return 0;   
}