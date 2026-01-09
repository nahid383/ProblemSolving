#include<stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int b[m];
    for(int i = 0; i < m; i++){
        scanf("%d", &b[i]);
        int count = 0;

        for(int j = 0; j < n; j++){
            if(a[j] <= b[i]){
                count++;
            }
        }

        printf("%d ", count);
    }

}
