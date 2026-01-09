#include<stdio.h>
#include<string.h>
int main()
{
    char any[101];
    scanf("%s",any);
    printf("Nauuo and ");
    if(strcmp(any,"first")==0)
    printf("Votes\n");
    if(strcmp(any,"second")==0)
    printf("Chess\n");
}