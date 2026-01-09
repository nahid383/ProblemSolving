#include<stdio.h>
#include<string.h>
int main(){

    char string[10001];
    gets(string);
    int len = strlen(string);
    int flag=1;
    for(int i=0; i<len; i++){
        if(flag==1 && string[i]=='"'){
            printf("``");
            flag=0;
        }
        else if(flag==0 && string[i]=='"'){
            printf("''");
            flag = 1;
        }
        else{
            printf("%c",string[i]);
        }
    }
}
