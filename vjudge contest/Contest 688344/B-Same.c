#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
   int count = 0;
        for(int j=1; j<N; j++)
        {
            if(A[0]==A[j])
            count++;
        }
        if(count==N-1)
        printf("Yes");
        else
        printf("No");
}