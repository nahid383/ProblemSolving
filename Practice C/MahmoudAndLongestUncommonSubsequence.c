#include<stdio.h>
#include<string.h>

int main(){
    char a[100001];
    char b[100001];

    scanf("%s",a);
    scanf("%s",b);
    int len1=strlen(a);
    int len2=strlen(b);
    if(strcmp(a,b)==0){
        printf("-1\n");

    }
    else if(len1>len2){
        printf("%d\n",len1);
    }
    else{
        printf("%d\n",len2);
    }
}