#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main(){
    char ch;

    printf("Press any key ...\n");
    ch = getchar();

    if(isalpha(ch)>0){
        printf("This character is a letter.\n");
    }
    else{
        if(isdigit(ch)>0){
            printf("This character is a digit.\n");
        }
        else{
            printf("This character is not alphanumeric.\n");
        }
    }
    getch();
}