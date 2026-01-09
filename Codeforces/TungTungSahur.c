#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char p[100001];
        char s[100001];

        scanf("%s",p);
        scanf("%s",s);
        
        if(strcmp(p,s)==0)
        {
            printf("YES\n");
        }
        else{
            for(int i=0; i<strlen(p); i++){
                for(int j=0; j<strlen(s); j++){
                    
                }
            }
        }
    }
}