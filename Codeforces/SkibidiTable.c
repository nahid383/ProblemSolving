#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        
        int n;
        scanf("%d",&n);

        int q;
        scanf("%d",&q);

        for(int i=1; i<=q; i++){

            char direction[3];
            int x,y,d;
            scanf("%s",direction);

            if(direction[0]=='-' && direction[1]=='+'){
                scanf("%d %d",&x,&y);
                
            }


        }
    }
}