#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int D[N];
    for(int i=1; i<=N; i++)
    {
        scanf("%d",&D[i]);
    }
    int repdigits=0;
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=D[i]; j++)
        {
            if(i>=1 && i<=9){
           if(i==j)
           repdigits++;
           else if((i*11)==j)
           repdigits++; 
            }
            else if(i%11==0)
            {
                int num  = i/10;
                if(num==j)
                repdigits++;
                else if(i==j)
                repdigits++;
            }
        }
    }

    printf("%d\n",repdigits);
}