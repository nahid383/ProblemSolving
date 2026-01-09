#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int h1,h2,h3;
        if(n%3!=0)
        {
             h1 = (n/3) + 2;
        }

        else {
            h1 =  (n/3)+1;
        }
      
        h2 = h1 - 1;
        h3 = n - h2 - h1;
        if(h3<=0)
        {
            h2 = h2-1;
            h3=1;
        }
        printf("%d %d %d\n",h2,h1,h3);
    }
}