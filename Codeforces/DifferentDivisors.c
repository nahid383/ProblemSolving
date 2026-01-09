#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int d;
        scanf("%d",&d);
        int count = 0;
        for(int i=1; ; i++){
            for(int j=1; j<=i; j++){
                if(i%j==0){
                    count++;
                }

            }
            if(count>=4){
                printf("%d\n",i);
                break;
            }
        }
    }
}