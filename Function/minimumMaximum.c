#include<stdio.h>
int maximum(int a,int b, int c, int d)
{
    int max;
    if(a>b && a>c && a>d)
    max= a;
    else if(b>a && b>c && b>d)
    max= b;
    else if(c>d && c>b && c>a)
    max= c;
    else 
    max =d;
    return max;

}

int minimum(int a, int b, int c, int d)
{
    int min;
    if(a<b && a<c && a<d)
     min= a;
    else if(b<a && b<c && b<d)
    min = b;
    else if(c<a && c<d && c<b)
    min = c;
    else
    min = d;

    return min;
}

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int minimum1 = minimum(a,b,c,d);
    printf("Minimum Number is: %d\n",minimum1);
    int maximum2= maximum(a,b,c,d);
    printf("Maximum number is: %d\n",maximum2);
    return 0;
}