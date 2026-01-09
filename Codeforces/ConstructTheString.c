#include<stdio.h>
void solve(){
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    for(int i=0; i<n; i++){
        printf("%c",'a'+(i%b));

    }
    printf("\n");
}
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        solve();
    }
    
}
//form the river to the sea, palestine will be free