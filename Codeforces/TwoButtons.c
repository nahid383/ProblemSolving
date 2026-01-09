#include<stdio.h>
#include<math.h>
int main(){
    int n,m;
    int steps = 0;


    scanf("%d %d",&n,&m);
    while(m>n){
        if(m%2==0){
            m=m/2;
        }
        else{
            m=m+1;
        }
        steps++;
    }
    steps = steps + (n-m);
    printf("%d\n",steps);
    

}