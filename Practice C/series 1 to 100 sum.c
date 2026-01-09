//1+2+3+4+5+.......+100=5050 c programming
#include<stdio.h>
int main()
{
    int num, i, sum=0;
       printf("1+2+3+4+...+100 ");
    for(i=1; i<=100;i++)

    {
        sum=sum+i;
    }
    printf("= %d",sum);
}
