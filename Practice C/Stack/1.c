#include<stdio.h>
#include<stdbool.h>
#define MAX 1000000
int stack[MAX];
int top = -1;

int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n==1){
            int val;
            scanf("%d",&val);
            stack[++top]=val;
        } else if(n==2){
            if(top!=-1){

                top--;
            }
        } else if(n==3){
            if(top==-1){
                printf("Empty!");
            } else{
                printf("%d\n",stack[top]);
            }
        }
    }
}