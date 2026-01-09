#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, x;
        scanf("%d %d", &n, &x);
        int p[n], idx = 0;

        if(x == n){
            for(int i = 0; i < n; i++){
                printf("%d ", i);
            }
            printf("\n");
            continue;
        }

        for(int i = 0; i < n; i++){
            if(i != x){
                p[idx++] = i;
            }
        }

        p[idx++] = x;

        for(int i = 0; i < n; i++){
            printf("%d ", p[i]);
        }
        printf("\n");
    }
    return 0;
}
