#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,k,h;
        scanf("%d %d %d %d",&n,&m,&k,&h);
        int a[n];
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }


        int count = 0;
        for(int i=0; i<n;  i++){
            int differ =abs(h - a[i]);

            if(differ%k==0){
                int div = differ/k;
                if(div>=1 && div<=m-1){
                    count++;
                }
            }
        }
        printf("%d\n",count);

    }
}