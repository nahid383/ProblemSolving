#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);

        char matrix[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                scanf(" %c",&matrix[i][j]);
            }
        }
    }
}
