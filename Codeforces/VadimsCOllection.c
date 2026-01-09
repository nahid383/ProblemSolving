#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char number[21];
        scanf("%s",number);
        int count[10]={0};
        // int n =  strlen(number);
        // for(int i=0; i<n-1; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(number[i]<number[j]){
        //             char temp = number[i];
        //             number[i] = number[j];
        //             number[j] = temp;
        //         }
        //     }
        // }

        // int flag = 0;
        // for(int i=0; i<9; i++){
        //     if(number[i]!=number[i+1]){
        //         flag=1;
        //     }
        // }
        // if(flag==0){
        //     printf("%s\n",number);

        // }
        // printf("%c",number[0]);
        // for(int i=1; i<n; i++){
        //     if(number[i]!=number[i-1]){
        //         printf("%c",number[i]);
        //     }
        // }
        for(int i=0; i<10; i++){
            count[number[i]-'0']++;
        }
        for(int i=0; i<10; i++){
            int required = 9 - i;
            for(int j=required; j<=9; ++j){
                if(count[j]){
                    printf("%d",j);
                    count[j]--;
                    break;
                }
            }
        }
        printf("\n");

    }
}