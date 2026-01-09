#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a,b;
        scanf("%d %d %d",&n,&a,&b);

        int dist = abs(a-b);

        if(dist%2==1){
            printf("No\n");
            
        }
        else{
            printf("Yes\n");
        }

    }
}