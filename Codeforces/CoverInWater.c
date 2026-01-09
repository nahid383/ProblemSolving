#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        int length = strlen(a);
        int flag = 0;
        int count = 0;
        int wil_2 = 0;
        for(int i=0; i<length; i++){
            if(a[i]=='.'){
                flag = 1;
                count++;
            }
            if(a[i]=='.' && a[i+1]=='.' && a[i+2]=='.'){
                wil_2 = 1;
            }
            
        }
        if(flag == 0){
            printf("0\n");
        }
        else if(wil_2 == 1){
            printf("2\n");
        }
        else{
            printf("%d\n",count);
        }

    }
}