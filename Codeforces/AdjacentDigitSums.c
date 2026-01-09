
//From The River To The Sea, Palestine Will Be Free
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        int sum = x+1-y;
        if(sum>=0 && sum%9==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    
}