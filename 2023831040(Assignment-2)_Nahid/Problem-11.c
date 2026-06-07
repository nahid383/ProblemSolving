#include<string.h>
int main()
{
    int N;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    int array[N];
    printf("Enter all elements of array: ");
    for(int i=0; i<N; i++)
    {

        scanf("%d",&array[i]);
    }
    int p;
    printf("P = ");
    scanf("%d",&p);
    printf("Enter 3 number: ");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    array[p]=a;
    array[p+1]=b;
    array[p+2]=c;
    for(int i=0; i<N; i++)
    {
        printf("%d ",array[i]);
    }
}
