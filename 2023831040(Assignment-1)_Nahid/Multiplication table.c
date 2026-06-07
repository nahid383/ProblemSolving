#include<stdio.h>
int main()
{
    int N,value;
    printf("Enter any integer number: ");
    scanf("%d",&N);
    for(int i=1; i<=10; i++)
    {
        value=N*i;
        printf("%d x %d = %d\n",N,i,value);
    }
    return 0;
}
