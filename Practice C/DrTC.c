#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char a[n+1];
        scanf("%s",a);
        int count = 0;
       strrev(a);
    
       
       for(int i=0; i<n; i++){
        if(a[i]=='0'){
            a[i]='1';
            for(int j=0; j<n; j++){
                if(a[j]=='1'){
                    count++;
                }
            }
            a[i]='0';
        }
        if(a[i]=='1'){
            a[i]='0';
            for(int j=0; j<n; j++){
                if(a[j]=='1'){
                    count++;
                }
            }
            a[i]='1';
        }
       }
       printf("%d\n",count);
    }
}