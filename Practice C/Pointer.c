#include<stdio.h>
int main(){
    // int a = 10;
    // int b = 1;
    // int* c = &a;
    // printf("%d\n",&a);
    // printf("%p\n",c);
    int x[5] = {1,2,3,4,5};

    int *p;
    p = x;

    for(int i=0; i<5; i++){
        printf("Addres : %X  ->  Value : %d\n",(p+i), *(p+i));
    }
    
}