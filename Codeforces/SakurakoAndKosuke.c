#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        // int x = 0;
        // for(int i=0; ; i++){
        //     if(i%2==0){
        //         x=x+(2*i-1);
        //         if(x<=-n){
        //             printf("Sakurako\n");
        //             break;
        //         }
        //     }
        //     else{
        //         x=x+(2*i+1);
        //         if(x>=-n){
        //             printf("Kosuke\n");
        //             break;
        //         }

        //     }

            
        // }

        if(n%2==0){
            printf("Sakurako\n");

        }
        else{
            printf("Kosuke\n");
        }
    }
}