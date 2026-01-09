#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){

        char stripes[8][8];
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                scanf(" %c", &stripes[i][j]);
            }
        }

        int redS = 0;
        for(int i = 0; i < 8; i++){
            int countRed = 0;
            for(int j = 0; j < 8; j++){
                if(stripes[i][j] == 'R'){
                    countRed++;
                }
            }
            if(countRed == 8){
                redS = 1;
                break;
            }
        }

        if(redS == 1){
            printf("R\n");
        }
        else{
            printf("B\n");
        }
    }
    return 0;
}
