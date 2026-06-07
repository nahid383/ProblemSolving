#include<stdio.h>
int main()
{
    int a = 5;
    int* x = &a; //int* is pointer
    printf("%p\n",x); // p is for printing pointer address
    printf("%p\n",&x);
    printf("%d\n",*x);
    
    return 0; 
}