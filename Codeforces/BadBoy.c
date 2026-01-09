#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        
        int n,m,i,j;

        scanf("%d %d %d %d",&n,&m,&i,&j);

        if(n==1 && m==1 && i==1 && j==1){
            printf("1 1 1 1\n");
        }
        else if(i==1 && j==1){
            printf("1 %d %d %d\n",m,n,m);
        }
        else if(n==i && m==j){
            printf("1 1 %d 1\n",n);
        }
        else{
            printf("1 1 %d %d\n",n,m);
        }
    }
    
}