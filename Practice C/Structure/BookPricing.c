#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        int noOfPages;
        float price;

    } a,b,c;

   
    a.noOfPages = 100;
    a.price = 487.66;
    strcpy(a.name,"Secret Seven");

    printf("Page: %d\n",a.noOfPages);
    printf("Price: %f\n",a.price);
    printf("Name: %s",a.name); 

}