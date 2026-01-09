#include<stdio.h>
int main()
{
    int a[3],b[3],alice=0,bob=0;
    for(int i=0; i<3; i++)
        scanf("%d",&a[i]);
    for(int j=0; j<3; j++)
        scanf("%d",&b[j]);
    for(int i=0; i<3; i++)
    {
        if(a[i]>b[i])
            alice++;
        if(b[i]>a[i])
            bob++;
    }
    printf("%d %d",alice,bob);
}
