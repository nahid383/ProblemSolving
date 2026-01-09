#include<stdio.h>
#include<string.h>
int main(){
    char dna1[101];
    char dna2[101];
    scanf("%s",dna1);
    scanf("%s",dna2);

    int len = strlen(dna1);

    int count = 0;
    for(int i=0; i<len; i++){

            if(dna1[i]!=dna2[i]){
                count++;
            }
        
    }
    printf("%d",count);
}