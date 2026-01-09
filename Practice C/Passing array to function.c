#include<stdio.h>
void display(int x[])
{
    int i;
    for(i=0; i<19; i++)
    {
        printf("%d ",x[i]);
    }
}
int main()
{
    int num[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    display(num);
}
