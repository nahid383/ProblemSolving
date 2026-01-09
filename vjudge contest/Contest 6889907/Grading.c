#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int array;
        scanf("%d",&array);
        if(array<38)
        printf("%d\n",array);
        
        else if(array%5==0 || array%5<3)
             printf("%d\n",array);

             else{
             int num = array/5;
             int result = (num+1)*5;
        printf("%d\n",result);}
    }
}