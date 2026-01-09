#include<stdio.h>
int main()
{
    int array[]={12,5,7,20,1};
    for(int i=0; i<5; i++)
    {
        if(array[i]==7){
            printf("Index is %d\n",i);
            array[i]=array[i+1];
            array[i+1]=array[i+2];
            
        }
    

    }
    for(int i=0; i<5; i++)
    printf("%d ",array[i]);
}