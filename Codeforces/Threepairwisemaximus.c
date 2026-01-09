#include<stdio.h>
void sort(int array[],int size)
{

    for(int i=0; i<size-1; i++)
    {

        for(int j=0; j<size-i-1; j++)
        {
            if(array[j]<array[j+1])
                {
                int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            }
        }
    }
}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int array[3];
for(int i=0; i<3; i++)
    scanf("%d",&array[i]);
    int size = sizeof(array)/sizeof(array[0]);
    sort(array,size);
    
    if(array[0]!=array[1])
    printf("NO\n");
    else{
    printf("YES\n");
    printf("%d %d %d\n",array[2],array[2],array[0]);
    }


    }

    return 0;
}
