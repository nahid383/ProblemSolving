#include<stdio.h>
int main()
{
    int N,even=0,odd=0;
      printf("Enter any integer number: ");

    scanf("%d",&N);
    for(int i=1; i<=N; i++)
    {
        if(i%2==0)
            even++;
        else
            odd++;
    }
    printf("Count of even number %d and Count of odd number %d",even,odd);
    return 0;
}
