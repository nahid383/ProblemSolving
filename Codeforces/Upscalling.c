#include<stdio.h>
void checkerboardprintf(int n)
{
    int size = 2*n;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(((i/2)+(j/2))%2==0)
            printf("#");
            else
            printf(".");
        }
        printf("\n");
    }
}
int main()
{
    int t; 
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        checkerboardprintf(n);
    }
    return 0;
}