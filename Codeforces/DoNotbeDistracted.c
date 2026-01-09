#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char stri[n+1];
        scanf("%s",stri);

        int freeq[27] = {0};

        // for(int i=0; i<n; i++){
        //     freeq[stri[i]]++;
        // }
        int flag = 1;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(stri[i]==stri[j] && stri[i]!=stri[j-1]){
                    flag=0;
                }
            }
        }
        if(flag==0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
}