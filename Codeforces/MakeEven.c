#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char n[10001];
        scanf("%s",n);
        long long num = atoi(n);

        if(num%2==0){
            printf("0\n");
        } 
        else{
            int len=strlen(n);
            int index1=-1;
            int index2=-1;

            for(int i=0; i<len; i++){
                int digit=n[i]-'0';
                if(digit%2==0){
                    index1=i;
                    break;
                }
            }

            for(int i=len-1; i>=1; i--){
                int digit = n[i]-'0';
                if(digit%2 ==0){
                    index2 =i;
                    break;
                }
            }

            if(index1 == -1 && index2 == -1){
                printf("-1\n");
            } 
            else{
                if(index1 != -1 && index2 != -1){
                    if(index1 > index2){
                        printf("%d\n",index2+1);
                    } 
                    else{
                        printf("%d\n",index1+1);
                    }
                }
                else{
                    if(index1 != -1){
                        printf("%d\n", index1+1);
                    } 
                    else{
                        printf("%d\n", index2+1);
                    }
                }
            }
        }
    }
    return 0;
}
