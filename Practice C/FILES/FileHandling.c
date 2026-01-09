#include<stdio.h>
int main(){
    FILE *ptr = fopen("Create.txt","w");
    // char striing[101];
    // while(fgets(striing, 5, ptr)!=NULL)
    // printf("%s",striing);
    char striing1[101] = "Shahjalal University of Science and Technology\n";
    fputs(striing1, ptr);
    fclose(ptr);


}