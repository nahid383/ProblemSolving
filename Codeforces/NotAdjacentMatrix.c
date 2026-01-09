#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int array = n * n;
        int doublearray[array + 1];
        for(int i=1; i<=array; i++){
            doublearray[i] = i;
        }
        if(n == 1){
            printf("1\n");
        }
        else if(n == 2){
            printf("-1\n");
        }
        else{
            int odd = 1, even = 2;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(odd <= array){
                        printf("%d ", odd);
                        odd += 2;
                    }
                    else{
                        printf("%d ", even);
                        even += 2;
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}
