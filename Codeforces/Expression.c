#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int p_1[6];
    p_1[0]=a+b*c;
    p_1[1]=a*(b+c);
    p_1[2]=a*b*c;
    p_1[3]=(a+b)*c;
    p_1[4]=a+b+c;
    p_1[5]=a*b+c;
    int max=0;
    for(int i=0; i<6; i++)
    {
        if(p_1[i]>max)
        max=p_1[i];
    }
    printf("%d",max);
}