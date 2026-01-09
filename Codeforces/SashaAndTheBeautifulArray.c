#include<stdio.h>
int main(){
    int pritom;
    scanf("%d",&pritom);
    while(pritom--){
        int nahid;
        scanf("%d",&nahid);
        int rayhan[nahid];
        for(int i=0; i<nahid; i++){
            scanf("%d",&rayhan[i]);
        }
        for(int i=0;i<nahid-1;i++){
            for(int j=i+1;j<nahid;j++){
                if(rayhan[i]>rayhan[j]){
                    int temp=rayhan[i];
                    rayhan[i]=rayhan[j];
                    rayhan[j]=temp;
                }
            }
        }
        

        printf("%d\n",rayhan[nahid-1]-rayhan[0]);
    }


}